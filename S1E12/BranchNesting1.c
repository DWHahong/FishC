/**
 * @file BranchNesting1.c
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
  char isRain, isFree;

  printf("是否有空？(Y/N)\n");
  scanf("%c", &isFree);

  getchar();//过滤回车

  printf("是否下雨?(Y/N)\n");
  scanf("%c", &isRain);

  if (isFree == 'Y') {
    if (isRain == 'Y') {
      printf("记得带伞哦！\n");
    }
  } else {
    printf("女神没空\n");
  }

  return 0;
}