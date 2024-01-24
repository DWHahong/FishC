/**
 * @file ArithmeticOperators0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <math.h>
#include <stdio.h>

int main() {
  int i, j, k;

  i = 1 + 2;
  j = 1 + 2 * 3;
  k = i + j + -1 + pow(2, 3);//3 + 7 + -1 + 8

  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("k = %d\n", k);

  return 0;
}