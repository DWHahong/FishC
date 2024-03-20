/**
 * @file For2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-20
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {

  int i, j;
  for (i = 0, j = 10; i < j; i++, j--) {
    printf("%d\n", i);
  }

  return 0;
}