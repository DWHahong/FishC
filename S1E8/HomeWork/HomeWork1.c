/**
 * @file HomeWork1.c
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
  char name[256];//必须输入一个值，不然报错，通常直接256
  float height, weight, in, lb;

  printf("请输入您的姓名:");
  scanf("%s", name);

  printf("请输入您的身高(cm):");
  scanf("%f", &height);

  printf("请输入您的体重(kg):");
  scanf("%f", &weight);

  printf("==========正在为您转换==========\n");

  in = height / 2.54;
  lb = weight / 0.4536;

  printf("%s的身高是%.2f(in),体重是%.2f(lb).\n", name, in, lb);

  return 0;
}