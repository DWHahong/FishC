/**
 * @file while1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */
// 统计从键盘输入的一行英文句子的字符个数
#include <stdio.h>

int main() {
  int count = 0;

  printf("请输入一行英文字符:");

  while (getchar() != '\n') {
    count = count + 1;
  }

  printf("你总共输入了%d个字符!\n", count);

  return 0;
}