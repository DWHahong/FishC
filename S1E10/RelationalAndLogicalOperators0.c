/**
 * @file RelationalAndLogicalOperators0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-13
 *
 * @copyright Copyright (c) 2024
 *
 */
 //关系运算符
#include <stdio.h>

int main() {
  int a = 5, b = 3;

  printf("%d\n", 1 < 2);
  printf("%d\n", a > b);
  printf("%d\n", a <= b + 1);
  printf("%d\n", 'a' + 'b' <= 'c');
  printf("%d\n", (a = 3) > (b = 5));

  return 0;
}