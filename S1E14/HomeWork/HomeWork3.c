/**
 * @file HomeWork3.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-20
 *
 * @copyright Copyright (c) 2024
 *
 */
// 打印九九乘法表右上版

#include <stdio.h>

int main() {
  int i, j, num;
  for (i = 1; i <= 9; i++) {
    for (j = 1; j <= 9; j++) {
      if (i < j) {
        printf("          ");
      } else {
        num = i * j;
        printf("%d * %d = %-3d  ", i, j, num);
      }
    }
    putchar('\n');
  }

  return 0;
}