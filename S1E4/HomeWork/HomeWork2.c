/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-16
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  printf("打印五个字符:%c %c %c %c %c\n", 70, 105, 115, 104,
         67);                         // 使用ANSII码输出字符
  printf("前面用 填充:%10d\n", 2015); // 输出10位数，若小于10位，这向左补空格
  printf("前面用0填充:%010d\n", 2015); // 输出10位数，若小于10位，这向左补0
  printf("右对齐，保留两位:%10.2f\n", 3.1416);
  printf("左对齐,保留3位:%-10.3f\n", 3.1416); // 左对齐再右对齐基础上加上-号；
  printf("右对齐，指数形式:%10e\n", 520000.0);
  printf("左对齐，指数形式:%-10e\n", 520000.0);

  return 0;
}