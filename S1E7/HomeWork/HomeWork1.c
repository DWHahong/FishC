/**
 * @file HomeWork1.c
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
  int i;
  float result;//答案使用的是double

  printf("请输入一个整数:");
  scanf("%i", &i);//答案%i处使用%d

  result = pow(i, 5);
  printf("%d的5次方是: %.2f\n",i, result);

  return 0;
}