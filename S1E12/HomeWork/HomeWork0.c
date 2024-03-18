/**
 * @file HomeWork0.c
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
  char ch[6] = "FishC";
  int i;

  printf("请输入你想访问的字符序号(0~5):");
  scanf("%d", &i);

  if (i >= 0 && i <= 5) {
    printf("%c\n", ch[i]);
  } else {
    printf("请输入0~5范围里的序号!\n");
  }

  return 0;
}