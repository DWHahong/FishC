/**
 * @file For1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-20
 *
 * @copyright Copyright (c) 2024
 *
 */
// 判断一个数是不是素数

#include <stdio.h>

int main() {
  int i, num;
  _Bool flag = 1;

  printf("请输入一个整数:");
  scanf("%d", &num);

  for (i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      flag = 0;
    }
  }

  if (flag) {
    printf("%d是一个素数\n", num);
  } else {
    printf("%d不是一个素数\n", num);
  }

  return 0;
}