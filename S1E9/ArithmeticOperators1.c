/**
 * @file ArithmeticOperators1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {

  //printf("整形输出: %d\n", 1 + 2.0);//整形输出浮点型数据会出错
  printf("整形输出: %d\n", 1 + (int)1.8);//强制转换
  printf("整形输出: %d\n", 1 + (int)(1+0.8));//强制转换
  printf("浮点型输出: %f\n", 1 + 2.0);

  return 0;
}