/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-14
 *
 * @copyright Copyright (c) 2024
 *
 */
// 小写与小写互相转换
#include <stdio.h>

int main() {
  char ch;
  printf("请输入一个字符: ");
  scanf("%c", &ch);
  if (ch >= 'A' && ch <= 'Z') {
    ch = ch + 32; // ch加32，变成小写，然后赋值回ch
  } else if (ch >= 'a' && ch <= 'z') {
    ch = ch - 32;
  }

  printf("%c\n", ch);

  return 0;
  ;
}