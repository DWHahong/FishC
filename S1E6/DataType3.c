/**
 * @file DataType3.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "stdio.h"
int main() {
  short i;
  unsigned short j;//unsigned代表无符号的

  i = -1;
  j = -1;

  printf("%d\n", i);//%d表示打印带符号的
  printf("%u\n", j);//%u表示打印不带符号的

  return 0;
}