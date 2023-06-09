/* mpi-bit.c  -  MPI bit level functions
 * Copyright (C) 1998, 1999, 2001, 2002, 2006 Free Software Foundation, Inc.
 * Copyright (C) 2013  g10 Code GmbH
 *
 * This file is part of Libgcrypt.
 *
 * Libgcrypt is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * Libgcrypt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <https://www.gnu.org/licenses/>.
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#include <config.h>
#include <stdio.h>
#include <stdlib.h>
#include "mpi-internal.h"
#include "longlong.h"


#ifdef MPI_INTERNAL_NEED_CLZ_TAB
#ifdef __STDC__
const
#endif
unsigned char
_gcry_clz_tab[] =
{
  0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
  6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
};
#endif


#define A_LIMB_1 ((mpi_limb_t)1)


/****************
 * Sometimes we have MSL (most significant limbs) which are 0;
 * this is for some reasons not good, so this function removes them.
 */
void
_gcry_mpi_normalize( gcry_mpi_t a )
{
    if( mpi_is_opaque(a) )
	return;

    for( ; a->nlimbs && !a->d[a->nlimbs-1]; a->nlimbs-- )
	;
}



/****************
 * Return the number of bits in A.
 */
unsigned int
_gcry_mpi_get_nbits (gcry_mpi_t a)
{
    unsigned n;

    if( mpi_is_opaque(a) ) {
	return a->sign; /* which holds the number of bits */
    }

    _gcry_mpi_normalize( a );
    if( a->nlimbs ) {
	mpi_limb_t alimb = a->d[a->nlimbs-1];
	if( alimb )
	    count_leading_zeros( n, alimb );
	else
	    n = BITS_PER_MPI_LIMB;
	n = BITS_PER_MPI_LIMB - n + (a->nlimbs-1) * BITS_PER_MPI_LIMB;
    }
    else
	n = 0;
    return n;
}


/****************
 * Test whether bit N is set.
 */
int
_gcry_mpi_test_bit( gcry_mpi_t a, unsigned int n )
{
    unsigned int limbno, bitno;
    mpi_limb_t limb;

    limbno = n / BITS_PER_MPI_LIMB;
    bitno  = n % BITS_PER_MPI_LIMB;

    if( limbno >= a->nlimbs )
	return 0; /* too far left: this is a 0 */
    limb = a->d[limbno];
    return (limb & (A_LIMB_1 << bitno))? 1: 0;
}


/****************
 * Set bit N of A.
 */
void
_gcry_mpi_set_bit( gcry_mpi_t a, unsigned int n )
{
  unsigned int i, limbno, bitno;

  if (mpi_is_immutable (a))
    {
      mpi_immutable_failed ();
      return;
    }

  limbno = n / BITS_PER_MPI_LIMB;
  bitno  = n % BITS_PER_MPI_LIMB;

  if ( limbno >= a->nlimbs )
    {
      for (i=a->nlimbs; i < a->alloced; i++)
        a->d[i] = 0;
      mpi_resize (a, limbno+1 );
      a->nlimbs = limbno+1;
    }
  a->d[limbno] |= (A_LIMB_1<<bitno);
}

/****************
 * Set bit N of A. and clear all bits above
 */
void
_gcry_mpi_set_highbit( gcry_mpi_t a, unsigned int n )
{
  unsigned int i, limbno, bitno;

  if (mpi_is_immutable (a))
    {
      mpi_immutable_failed ();
      return;
    }

  limbno = n / BITS_PER_MPI_LIMB;
  bitno  = n % BITS_PER_MPI_LIMB;

  if ( limbno >= a->nlimbs )
    {
      for (i=a->nlimbs; i < a->alloced; i++)
        a->d[i] = 0;
      mpi_resize (a, limbno+1 );
      a->nlimbs = limbno+1;
    }
  a->d[limbno] |= (A_LIMB_1<<bitno);
  for ( bitno++; bitno < BITS_PER_MPI_LIMB; bitno++ )
    a->d[limbno] &= ~(A_LIMB_1 << bitno);
  a->nlimbs = limbno+1;
}

/****************
 * clear bit N of A and all bits above
 */
void
_gcry_mpi_clear_highbit( gcry_mpi_t a, unsigned int n )
{
  unsigned int limbno, bitno;

  if (mpi_is_immutable (a))
    {
      mpi_immutable_failed ();
      return;
    }

  limbno = n / BITS_PER_MPI_LIMB;
  bitno  = n % BITS_PER_MPI_LIMB;

  if( limbno >= a->nlimbs )
    return; /* not allocated, therefore no need to clear bits :-) */

  for( ; bitno < BITS_PER_MPI_LIMB; bitno++ )
    a->d[limbno] &= ~(A_LIMB_1 << bitno);
  a->nlimbs = limbno+1;
}

/****************
 * Clear bit N of A.
 */
void
_gcry_mpi_clear_bit( gcry_mpi_t a, unsigned int n )
{
  unsigned int limbno, bitno;

  if (mpi_is_immutable (a))
    {
      mpi_immutable_failed ();
      return;
    }

  limbno = n / BITS_PER_MPI_LIMB;
  bitno  = n % BITS_PER_MPI_LIMB;

  if (limbno >= a->nlimbs)
    return; /* Don't need to clear this bit, it's far too left.  */
  a->d[limbno] &= ~(A_LIMB_1 << bitno);
}


/****************
 * Shift A by COUNT limbs to the right
 * This is used only within the MPI library
 */
void
_gcry_mpi_rshift_limbs( gcry_mpi_t a, unsigned int count )
{
  mpi_ptr_t ap = a->d;
  mpi_size_t n = a->nlimbs;
  unsigned int i;

  if (mpi_is_immutable (a))
    {
      mpi_immutable_failed ();
      return;
    }

  if (count >= n)
    {
      a->nlimbs = 0;
      return;
    }

  for( i = 0; i < n - count; i++ )
    ap[i] = ap[i+count];
  ap[i] = 0;
  a->nlimbs -= count;
}


/*
 * Shift A by N bits to the right.
 */
void
_gcry_mpi_rshift ( gcry_mpi_t x, gcry_mpi_t a, unsigned int n )
{
  unsigned int nlimbs = (n/BITS_PER_MPI_LIMB);
  unsigned int nbits = (n%BITS_PER_MPI_LIMB);
  unsigned int i;
  mpi_size_t alimbs;
  mpi_ptr_t xp, ap;

  if (mpi_is_immutable (x))
    {
      mpi_immutable_failed ();
      return;
    }

  alimbs = a->nlimbs;

  if (x != a)
    {
      RESIZE_IF_NEEDED (x, alimbs);
      x->nlimbs = alimbs;
      x->flags = a->flags;
      x->sign = a->sign;
    }

  /* In-place operation.  */
  if (nlimbs >= alimbs)
    {
      x->nlimbs = 0;
      return;
    }

  xp = x->d;
  ap = a->d;

  if (alimbs && nbits)
    {
      _gcry_mpih_rshift (xp, ap + nlimbs, alimbs - nlimbs, nbits);
      if (nlimbs)
	xp[alimbs - nlimbs] = 0;
      x->nlimbs -= nlimbs;
    }
  else if (nlimbs || (x != a))
    {
      for (i = 0; i < alimbs - nlimbs; i++ )
	xp[i] = ap[i + nlimbs];
      if (nlimbs)
	xp[i] = 0;
      x->nlimbs -= nlimbs;
    }

  MPN_NORMALIZE (x->d, x->nlimbs);
}


/****************
 * Shift A by COUNT limbs to the left
 * This is used only within the MPI library
 */
void
_gcry_mpi_lshift_limbs (gcry_mpi_t a, unsigned int count)
{
  mpi_ptr_t ap;
  int n = a->nlimbs;
  int i;

  if (!count || !n)
    return;

  RESIZE_IF_NEEDED (a, n+count);

  ap = a->d;
  for (i = n-1; i >= 0; i--)
    ap[i+count] = ap[i];
  for (i=0; i < count; i++ )
    ap[i] = 0;
  a->nlimbs += count;
}


/*
 * Shift A by N bits to the left.
 */
void
_gcry_mpi_lshift ( gcry_mpi_t x, gcry_mpi_t a, unsigned int n )
{
  unsigned int nlimbs = (n/BITS_PER_MPI_LIMB);
  unsigned int nbits = (n%BITS_PER_MPI_LIMB);
  mpi_size_t alimbs;
  mpi_ptr_t xp, ap;
  int i;

  if (mpi_is_immutable (x))
    {
      mpi_immutable_failed ();
      return;
    }

  if (x == a && !n)
    return;  /* In-place shift with an amount of zero.  */

  /* Note: might be in-place operation, so a==x or a!=x. */

  alimbs = a->nlimbs;

  RESIZE_IF_NEEDED (x, alimbs + nlimbs + 1);
  xp = x->d;
  ap = a->d;
  if (nbits && alimbs)
    {
      x->nlimbs = alimbs + nlimbs + 1;
      xp[alimbs + nlimbs] = _gcry_mpih_lshift (xp + nlimbs, ap, alimbs, nbits);
    }
  else
    {
      x->nlimbs = alimbs + nlimbs;
      for (i = alimbs - 1; i >= 0; i--)
	xp[i + nlimbs] = ap[i];
    }
  for (i = 0; i < nlimbs; i++)
    xp[i] = 0;
  x->flags = a->flags;
  x->sign = a->sign;
  MPN_NORMALIZE (x->d, x->nlimbs);
}
