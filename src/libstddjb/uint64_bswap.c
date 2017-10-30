/* ISC license. */

#include <skalibs/uint64.h>

uint64_t uint64_bswap (uint64_t a)
{
  return
   (a & 0x00000000000000ffull) << 56 |
   (a & 0x000000000000ff00ull) << 40 |
   (a & 0x0000000000ff0000ull) << 24 |
   (a & 0x00000000ff000000ull) << 8 |
   (a & 0x000000ff00000000ull) >> 8 |
   (a & 0x0000ff0000000000ull) >> 24 |
   (a & 0x00ff000000000000ull) >> 40 |
   (a & 0xff00000000000000ull) >> 56 ;
}