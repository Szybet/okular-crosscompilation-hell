/*
    This file is part of the KDE project
    SPDX-FileCopyrightText: 2001 George Staikos <staikos@kde.org>

    Based heavily on SHA1 code from GPG 1.0.3:
    SPDX-FileCopyrightText: 1998 FSF

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#include "sha1.h"

#include <config-kwalletbackend.h>

// DO NOT INCLUDE THIS. IT BREAKS KWALLET.
// We need to live with -Wundef until someone really figures out the problem.
//#include <QtCore/qglobal.h> // for Q_BYTE_ORDER and friends
// Workaround for -Wundef
#define Q_BIG_ENDIAN 1
#define Q_BYTE_ORDER Q_BIG_ENDIAN

#include <sys/types.h>
#if HAVE_SYS_BITYPES_H
#include <sys/bitypes.h> /* For uintXX_t on Tru64 */
#endif
#if HAVE_STDINT_H
#include <stdint.h>
#endif

#include <string.h>

// clang-format off
// FIXME: this can be optimized to one instruction on most cpus.
#define rol(x,y) ((x << y) | (x >> (32-y)))

#define K1 0x5a827999L
#define K2 0x6ed9eba1L
#define K3 0x8f1bbcdcL
#define K4 0xca62c1d6L
#define F1(x,y,z) ( z ^ ( x & ( y ^ z ) ) )
#define F2(x,y,z) ( x ^ y ^ z )
#define F3(x,y,z) ( ( x & y ) | ( z & ( x | y ) ) )
#define F4(x,y,z) ( x ^ y ^ z )

#define M(i) ( tm = x[i&0x0f] ^ x[(i-14)&0x0f]            \
                    ^ x[(i-8)&0x0f] ^ x[(i-3)&0x0f]         \
                    , (x[i&0x0f] = (tm << 1) | (tm >> 31)))

#define R(a,b,c,d,e,f,k,m)   do { e += rol(a, 5)          \
                                           +  f(b, c, d)         \
                                           +  k                  \
                                           +  m;                 \
    b  = rol(b, 30);        \
} while(0)
// clang-format on

SHA1::SHA1()
{
    _hashlen = 160;
    _init = false;
    reset();
}

int SHA1::reset()
{
    _h0 = 0x67452301;
    _h1 = 0xefcdab89;
    _h2 = 0x98badcfe;
    _h3 = 0x10325476;
    _h4 = 0xc3d2e1f0;
    _nblocks = 0;
    _count = 0;
    memset(_buf, 0, 56);      // clear the buffer

    _init = true;
    return 0;
}

int SHA1::size() const
{
    return _hashlen;
}

SHA1::~SHA1()
{

}

void SHA1::transform(void *data)
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    unsigned int tm;
    unsigned int x[16];
    unsigned char *_data = (unsigned char *)data;

    a = _h0;
    b = _h1;
    c = _h2;
    d = _h3;
    e = _h4;

#if Q_BYTE_ORDER == Q_BIG_ENDIAN
    memcpy(x, _data, 64);
#else
    int i;
    unsigned char *p2;
    for (i = 0, p2 = (unsigned char *)x;
            i < 16; i++, p2 += 4) {
        p2[3] = *_data++;
        p2[2] = *_data++;
        p2[1] = *_data++;
        p2[0] = *_data++;
    }
#endif

    R(a, b, c, d, e, F1, K1, x[ 0]);
    R(e, a, b, c, d, F1, K1, x[ 1]);
    R(d, e, a, b, c, F1, K1, x[ 2]);
    R(c, d, e, a, b, F1, K1, x[ 3]);
    R(b, c, d, e, a, F1, K1, x[ 4]);
    R(a, b, c, d, e, F1, K1, x[ 5]);
    R(e, a, b, c, d, F1, K1, x[ 6]);
    R(d, e, a, b, c, F1, K1, x[ 7]);
    R(c, d, e, a, b, F1, K1, x[ 8]);
    R(b, c, d, e, a, F1, K1, x[ 9]);
    R(a, b, c, d, e, F1, K1, x[10]);
    R(e, a, b, c, d, F1, K1, x[11]);
    R(d, e, a, b, c, F1, K1, x[12]);
    R(c, d, e, a, b, F1, K1, x[13]);
    R(b, c, d, e, a, F1, K1, x[14]);
    R(a, b, c, d, e, F1, K1, x[15]);
    R(e, a, b, c, d, F1, K1, M(16));
    R(d, e, a, b, c, F1, K1, M(17));
    R(c, d, e, a, b, F1, K1, M(18));
    R(b, c, d, e, a, F1, K1, M(19));
    R(a, b, c, d, e, F2, K2, M(20));
    R(e, a, b, c, d, F2, K2, M(21));
    R(d, e, a, b, c, F2, K2, M(22));
    R(c, d, e, a, b, F2, K2, M(23));
    R(b, c, d, e, a, F2, K2, M(24));
    R(a, b, c, d, e, F2, K2, M(25));
    R(e, a, b, c, d, F2, K2, M(26));
    R(d, e, a, b, c, F2, K2, M(27));
    R(c, d, e, a, b, F2, K2, M(28));
    R(b, c, d, e, a, F2, K2, M(29));
    R(a, b, c, d, e, F2, K2, M(30));
    R(e, a, b, c, d, F2, K2, M(31));
    R(d, e, a, b, c, F2, K2, M(32));
    R(c, d, e, a, b, F2, K2, M(33));
    R(b, c, d, e, a, F2, K2, M(34));
    R(a, b, c, d, e, F2, K2, M(35));
    R(e, a, b, c, d, F2, K2, M(36));
    R(d, e, a, b, c, F2, K2, M(37));
    R(c, d, e, a, b, F2, K2, M(38));
    R(b, c, d, e, a, F2, K2, M(39));
    R(a, b, c, d, e, F3, K3, M(40));
    R(e, a, b, c, d, F3, K3, M(41));
    R(d, e, a, b, c, F3, K3, M(42));
    R(c, d, e, a, b, F3, K3, M(43));
    R(b, c, d, e, a, F3, K3, M(44));
    R(a, b, c, d, e, F3, K3, M(45));
    R(e, a, b, c, d, F3, K3, M(46));
    R(d, e, a, b, c, F3, K3, M(47));
    R(c, d, e, a, b, F3, K3, M(48));
    R(b, c, d, e, a, F3, K3, M(49));
    R(a, b, c, d, e, F3, K3, M(50));
    R(e, a, b, c, d, F3, K3, M(51));
    R(d, e, a, b, c, F3, K3, M(52));
    R(c, d, e, a, b, F3, K3, M(53));
    R(b, c, d, e, a, F3, K3, M(54));
    R(a, b, c, d, e, F3, K3, M(55));
    R(e, a, b, c, d, F3, K3, M(56));
    R(d, e, a, b, c, F3, K3, M(57));
    R(c, d, e, a, b, F3, K3, M(58));
    R(b, c, d, e, a, F3, K3, M(59));
    R(a, b, c, d, e, F4, K4, M(60));
    R(e, a, b, c, d, F4, K4, M(61));
    R(d, e, a, b, c, F4, K4, M(62));
    R(c, d, e, a, b, F4, K4, M(63));
    R(b, c, d, e, a, F4, K4, M(64));
    R(a, b, c, d, e, F4, K4, M(65));
    R(e, a, b, c, d, F4, K4, M(66));
    R(d, e, a, b, c, F4, K4, M(67));
    R(c, d, e, a, b, F4, K4, M(68));
    R(b, c, d, e, a, F4, K4, M(69));
    R(a, b, c, d, e, F4, K4, M(70));
    R(e, a, b, c, d, F4, K4, M(71));
    R(d, e, a, b, c, F4, K4, M(72));
    R(c, d, e, a, b, F4, K4, M(73));
    R(b, c, d, e, a, F4, K4, M(74));
    R(a, b, c, d, e, F4, K4, M(75));
    R(e, a, b, c, d, F4, K4, M(76));
    R(d, e, a, b, c, F4, K4, M(77));
    R(c, d, e, a, b, F4, K4, M(78));
    R(b, c, d, e, a, F4, K4, M(79));

    _h0 += a;
    _h1 += b;
    _h2 += c;
    _h3 += d;
    _h4 += e;

}

bool SHA1::readyToGo() const
{
    return _init;
}

int SHA1::process(const void *block, int len)
{
    if (!_init) {
        return -1;
    }

    unsigned char *_block = (unsigned char *)block;

    int cnt = 0;
    // Flush the buffer before proceeding
    if (_count == 64) {
        transform(_buf);
        _count = 0;
        _nblocks++;
    }

    if (!_block) {
        return 0;
    }

    if (_count) {
        for (; len && _count < 64; --len, ++cnt) {
            _buf[_count++] = *_block++;
        }
        process(nullptr, 0);       // flush the buffer if necessary
        if (!len) {
            return cnt;
        }
    }

    while (len >= 64) {
        transform(_block);
        _count = 0;
        _nblocks++;
        len -= 64;
        cnt += 64;
        _block += 64;
    }

    for (; len && _count < 64; --len, ++cnt) {
        _buf[_count++] = *_block++;
    }

    return cnt;
}

const unsigned char *SHA1::hash()
{
    unsigned int t;
    unsigned int msb;
    unsigned int lsb;
    unsigned char *p;

    if (!_init) {
        return (unsigned char *)_buf;
    }

    process(nullptr, 0);

    msb = 0;
    t = _nblocks;

    if ((lsb = t << 6) < t) {
        msb++;
    }

    msb += t >> 26;
    t = lsb;

    if ((lsb = t + _count) < t) {
        msb++;
    }

    t = lsb;

    if ((lsb = t << 3) < t) {
        msb++;
    }

    msb += t >> 29;

    _buf[_count++] = 0x80;

    if (_count < 56) {
        while (_count < 56) {
            _buf[_count++] = 0;
        }
    } else {
        while (_count < 64) {
            _buf[_count++] = 0;
        }
        process(nullptr, 0);
        memset(_buf, 0, 56);
    }

    _buf[56] = msb >> 24;
    _buf[57] = msb >> 16;
    _buf[58] = msb >>  8;
    _buf[59] = msb;
    _buf[60] = lsb >> 24;
    _buf[61] = lsb >> 16;
    _buf[62] = lsb >>  8;
    _buf[63] = lsb;

    transform(_buf);

    p = _buf;
// clang-format off
#if Q_BYTE_ORDER == Q_BIG_ENDIAN
#define X(a) do { *(uint32_t *)p = _h##a; p += 4; } while (0)
#else
#define X(a) do { *p++ = _h##a >> 24;  *p++ = _h##a >> 16;             \
        *p++ = _h##a >>  8;  *p++ = _h##a;        } while (0)
#endif
// clang-format on

    X(0);
    X(1);
    X(2);
    X(3);
    X(4);

#undef X

    _init = false;

    return (unsigned char *)_buf;
}
