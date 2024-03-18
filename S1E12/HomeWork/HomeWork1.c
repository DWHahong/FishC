/**
 * @file HomeWork1.c
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
  float A, B;
  char ch;
  float result;

  printf("请输入式子: ");
  scanf("%f %c %f", &A, &ch, &B);

  switch (ch) {
  case '+':
    result = A + B;
    break;
  case '-':
    result = A - B;
    break;
  case '*':
    result = (float)A * B;
    break;
  case '/':
    if (A != 0 && B != 0) {
      result = A / B;
      break;
    } else {
      printf("很遗憾，除数不能为零！\n");
      break;
    }
  }

  printf("结果是:%.2f\n", result);

  return 0;
}