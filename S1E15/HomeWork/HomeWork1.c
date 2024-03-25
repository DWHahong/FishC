/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
 //10000以内素数个数
#include <stdio.h>

int main() {
  int count = 2; // 已知2和3是素数
  int i, j;
  _Bool flag = 1;

  for (i = 5; i < 10000; i++) {
    for (j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      count++;
    } else {
      flag = 1;
    }
  }

  printf("10000以内共有%d个素数!\n", count);

  return 0;
  ;
}