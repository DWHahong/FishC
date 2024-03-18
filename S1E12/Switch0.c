/**
 * @file Switch0.c
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
  char ch;

  printf("请输入您的评级:");
  scanf("%c", &ch);

  switch (ch) {
  case 'A':
    printf("你的成绩在90分以上!\n");
    break;
  case 'B':
    printf("你的成绩在80分~90分之间!\n");
    break;
  case 'C':
    printf("你的成绩在70分~80分之间!\n");
    break;
  case 'D':
    printf("你的成绩在60分~70分之间!\n");
    break;
  case 'E':
    printf("你的成绩在60分以下!\n");
    break;
  default:
    printf("请输入有效的成绩评级!\n");
    break;
  }

  return 0;
}