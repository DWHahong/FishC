/**
 * @file CharactersAndStrings2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-23
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
int main() {
  unsigned char height;//char前面要注明是signed或unsigned,不能想当然直接用Char,注意不同的变量取值范围
  height = 170;

  printf("小甲鱼的身高是%d厘米\n", height);

  return 0;
}