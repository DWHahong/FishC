/**
 * @file BranchNesting2.c
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
  char hasBF;

  printf("小花你有男朋友吗？(Y/N)\n");
  scanf("%c", &hasBF);

  if (hasBF == 'Y') // 注意两个等于号
  {
    printf("那。。。。祝福你们咯!\n");
  } else {
    printf("那我们在一起吧!\n");
  }

  return 0;
}