/**
 * @file HomeWork3.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
// 凯撒加密

#include <stdio.h>

int main() {
  int ch;

  printf("请输入明文:");

  while ((ch = getchar()) != '\n') {
    if (ch >= 'a' && ch <= 'z') {
      putchar('a' + (ch - 'a' + 3) % 26);
      continue;
    }
    if (ch >= 'A' && ch <= 'Z') {
      putchar('A' + (ch - 'A' + 3) % 26);
      continue;
    }

    putchar(ch);
  }

  putchar('\n');

  return 0;
  ;
}