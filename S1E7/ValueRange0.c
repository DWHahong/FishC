/**
 * @file ValueRange0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-22
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "math.h"
#include "stdio.h"

int main() {
  //unsigned int result = pow(2, 32) - 1;
  //printf("result = %u\n", result);

  int result = pow(2, 31) - 1;
  printf("result = %d\n", result);

  return 0;
}