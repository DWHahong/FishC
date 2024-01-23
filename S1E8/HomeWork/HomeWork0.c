/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-23
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  float F, C;

  printf("请输入华氏度：");
  scanf("%F", &F);

  C = (F - 32) * 5 / 9;

  printf("转换为摄氏度是:%.2f\n", C);

  return 0;
}