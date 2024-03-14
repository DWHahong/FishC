/**
 * @file If1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-14
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {
  int i;

  printf("您老贵庚啊:");
  scanf("%d", &i);

  if (i >= 18) {
    printf("进门左拐！\n");

    printf("balabala!\n");
  } else {
    printf("慢走，不送\n");
  }

  return 0;
}