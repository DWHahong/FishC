/**
 * @file HomeWork0.c
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
  int pay = 0;
  printf("公斤 -- 花费(元):\n");

  for (int i = 1; i <= 20; i++) {
    pay = 23 + ((i - 1) * 14);
    printf("%2d -- %3d \n", i, pay);
  }

  return 0;
  ;
}