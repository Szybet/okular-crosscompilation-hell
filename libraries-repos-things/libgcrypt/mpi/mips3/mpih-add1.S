/* mips3  add_n -- Add two limb vectors of the same length > 0 and store
 *		   sum in a third limb vector.
 *
 *      Copyright (C) 1995, 1998, 2000
 *                    2001, 2002 Free Software Foundation, Inc.
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


/*******************
 *  mpi_limb_t
 *  _gcry_mpih_add_n( mpi_ptr_t res_ptr,	($4)
 *		   mpi_ptr_t s1_ptr,	($5)
 *		   mpi_ptr_t s2_ptr,	($6)
 *		   mpi_size_t size)	($7)
 */

	.text
	.align	2
	.globl	_gcry_mpih_add_n
	.ent	_gcry_mpih_add_n
_gcry_mpih_add_n:
	.set	noreorder
	.set	nomacro

	ld	$10,0($5)
	ld	$11,0($6)

	daddiu	$7,$7,-1
	and	$9,$7,4-1	# number of limbs in first loop
	beq	$9,$0,.L0	# if multiple of 4 limbs, skip first loop
	 move	$2,$0

	dsubu	$7,$7,$9

.Loop0: daddiu	$9,$9,-1
	ld	$12,8($5)
	daddu	$11,$11,$2
	ld	$13,8($6)
	sltu	$8,$11,$2
	daddu	$11,$10,$11
	sltu	$2,$11,$10
	sd	$11,0($4)
	or	$2,$2,$8

	daddiu	$5,$5,8
	daddiu	$6,$6,8
	move	$10,$12
	move	$11,$13
	bne	$9,$0,.Loop0
	 daddiu $4,$4,8

.L0:	beq	$7,$0,.Lend
	 nop

.Loop:	daddiu	$7,$7,-4

	ld	$12,8($5)
	daddu	$11,$11,$2
	ld	$13,8($6)
	sltu	$8,$11,$2
	daddu	$11,$10,$11
	sltu	$2,$11,$10
	sd	$11,0($4)
	or	$2,$2,$8

	ld	$10,16($5)
	daddu	$13,$13,$2
	ld	$11,16($6)
	sltu	$8,$13,$2
	daddu	$13,$12,$13
	sltu	$2,$13,$12
	sd	$13,8($4)
	or	$2,$2,$8

	ld	$12,24($5)
	daddu	$11,$11,$2
	ld	$13,24($6)
	sltu	$8,$11,$2
	daddu	$11,$10,$11
	sltu	$2,$11,$10
	sd	$11,16($4)
	or	$2,$2,$8

	ld	$10,32($5)
	daddu	$13,$13,$2
	ld	$11,32($6)
	sltu	$8,$13,$2
	daddu	$13,$12,$13
	sltu	$2,$13,$12
	sd	$13,24($4)
	or	$2,$2,$8

	daddiu	$5,$5,32
	daddiu	$6,$6,32

	bne	$7,$0,.Loop
	 daddiu $4,$4,32

.Lend:	daddu	$11,$11,$2
	sltu	$8,$11,$2
	daddu	$11,$10,$11
	sltu	$2,$11,$10
	sd	$11,0($4)
	j	$31
	or	$2,$2,$8

	.end	_gcry_mpih_add_n

