/**
 * @file NestedLoops0.c
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

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("i = %d,j = %d\n", i, j);
    }
  }

  return 0;
}