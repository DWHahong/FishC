/**
 * @file Break2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (j == 3) {
        break;
        ;
      }
    }
    if (j == 3) {
      break;
    }
  }

  printf("i = %d, j = %d\n", i, j);

  return 0;
}