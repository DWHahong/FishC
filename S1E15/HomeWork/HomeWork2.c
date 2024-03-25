/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
// 对素数求解思路进行简化
#include <math.h>
#include <stdio.h>

int main() {
  int count = 4; // 已知2，3，5，7是素数
  int i, j, k;
  _Bool flag = 1;

  for (i = 9; i < 10000; i++) {
    k = (int)sqrt((double)i);

    for (j = 2; j <= k; j++) {
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