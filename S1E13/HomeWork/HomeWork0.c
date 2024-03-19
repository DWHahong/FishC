/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {
  int ch, count = 0;

  printf("请输入一行英文句子:");

  while ((ch = getchar()) !='\n') { // 将每个字符赋值到ch后到下方if语句中进行循环比对。
    if (ch >= 'A' && ch <= 'Z') {
      count = count + 1;
    }
  }
  printf("你总共输入了%d个大写字母!\n", count);

  return 0;
}