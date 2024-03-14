/**
 * @file If2.c
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

  printf("请输入你的分数：");
  scanf("%d", &i);

  if (i >= 90) {
    printf("你的分数等级是A!\n");
  } else if (i >= 80 && i < 90) {
    printf("你的分数等级是B!\n");
  } else if (i >= 70 && i < 80) {
    printf("你的分数等级是C!\n");
  } else if (i >= 60 && i < 70) {
    printf("你的分数等级是D!\n");
  } else {
    printf("你的分数等级是E!\n");
  }

  return 0;
}