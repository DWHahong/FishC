/**
 * @file while0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {
  int sum, i;
  i = 1;
  sum = 0;

  while (i <= 100) {
    sum = sum + i;
    i = i + 1;
  }
  printf("结果是:%d\n", sum);

  return 0;
}