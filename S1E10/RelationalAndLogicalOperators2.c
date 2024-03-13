/**
 * @file RelationalAndLogicalOperators2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-13
 *
 * @copyright Copyright (c) 2024
 *
 */
// 短路求值
#include <stdio.h>

int main() {
  int a = 3, b = 3;

  (a = 0) && (b == 5);
  printf("a = %d,b = %d\n", a, b);

  (a = 1) || (b == 5);
  printf("a = %d,b = %d\n", a, b);

  return 0;
}