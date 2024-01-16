/**
 * @file HomeWork1.c
 * @author King
 * @brief 
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "stdio.h"

int main() {
  float r, c, s; // r是半径，c是周长，s是面积
  r = 5;

  c = 2 * 3.14 * r; // 计算周长
  s = 3.14 * r * r; // 计算面积

  printf("半径为%.0f的圆,周长是%.2f,面积是%.2f\n", r, c, s);

  return 0;
}