/**
 * @file Continue0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  int ch;

  while ((ch = getchar()) != '\n') {
    if (ch == 'C') {
      continue;
    }
    putchar(ch);
  }
  putchar('\n');

  return 0;
}