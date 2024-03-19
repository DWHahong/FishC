/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("请输入待转换的字符串:");

  int ch;
  int num = 0;

  do {
    ch = getchar();

    if (ch >= '0' && ch <= '9') {
      num = 10 * num + (ch - '0');
    } else {
      if (num) {
        break; // 如果已有数字，则跳出循环
      }
    }
  } while (ch != '\n');

  printf("结果是:%d\n", num);

  return 0;
}