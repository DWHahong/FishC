/**
 * @file BranchNesting0.c
 * @author King
 * @brief 
 * @version 0.1
 * @date 2024-03-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
  int a, b;
  printf("请输入两个数:");
  scanf("%d %d", &a, &b);

  if (a != b) {
    if (a > b) {
      printf("%d > %d\n", a, b);
    } else {
      printf("%d < %d\n", a, b);
    }
  } else {
    printf("%d = %d\n", a, b);
  }

  return 0;
}