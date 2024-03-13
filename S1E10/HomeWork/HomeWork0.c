/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {
  int year;

  printf("请输入年份\n");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("%d年是闰年\n", year);
  } else {
    printf("%d年不是闰年\n", year);
  }

  return 0;
}