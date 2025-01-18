#include <immintrin.h>
#include <stdint.h>

#include "./helper/print_m128i.c"

int main(void) {
  uint32_t* input = malloc(sizeof(uint32_t) * 4);

  input[0] = 1;
  input[1] = 2;
  input[2] = 3;
  input[3] = 4;

  __m128i temp = _mm_loadu_si128((__m128i*)input);
  print128_num32(temp);
  
  return EXIT_SUCCESS;
}
