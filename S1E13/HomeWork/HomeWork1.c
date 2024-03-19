/**
 * @file HomeWork1.c
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
  int ch;

  printf("请输入一行英文句子:");

  while ((ch = getchar()) != '\n') { //通过getchar函数将字符赋值到ch
    if (ch >= 'A' && ch <= 'Z') { //判断是否大写
      ch = ch - 'A' + 'a';//大写转换为小写
    } else if (ch >= 'a' && ch <= 'z') { //判断是否小写
      ch = ch - 'a' + 'A'; //小写转换为大写
    }
    putchar(ch); //字符组合函数
  }
  putchar('\n');

  return 0;
}