#include <stdint.h>
#include <string.h>
#include <immintrin.h>
#include <stdio.h>
void print128_num32(__m128i var)
{
  uint32_t val[4];
  memcpy(val, &var, sizeof(val));
  printf("Numerical: %i %i %i %i\n",
         val[0], val[1], val[2], val[3]);
}
