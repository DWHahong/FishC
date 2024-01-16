/**
 * @file Variable.c
 * @author King
 * @brief 变量
 * @version 0.1
 * @date 2024-01-16
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  int a;//整形(整数)
  char b;//字符型，占用一个直接
  float c;//单精度浮点型
  double d;//双精度浮点型

  a = 520;
  b = 'F';
  c = 3.14;
  d = 3.141592653;

  printf("鱼C工作室创办于2010年的%d\n", a);
  printf("I love %cishC.com!\n", b);
  printf("圆周率是: %.2f\n", c);//.2代表精确到小数点后2位
  printf("精确到小数点后9位的圆周率是: %11.9f\n", d);//.9代表精确到小数点后9位，11代表用了11位

  return 0;
}