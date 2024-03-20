/**
 * @file HomeWork4.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-20
 *
 * @copyright Copyright (c) 2024
 *
 */
// 打印九九乘法表右下版

#include <stdio.h>

int main() {
  int i, j, k, num;
  for (i = 1; i <= 9; i++) {
    for (k = 1; k <= 9 - i; k++) {
      printf("        ");
    }
    for (j = 1; j <= i; j++) {
      num = i * j;
      printf("%d*%d=%-2d  ", i, j, num);
    }

    putchar('\n');
  }

  return 0;
}