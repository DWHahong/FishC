/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-17
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "stdio.h"

#define PI 3.14159
#define S(r) PI *r *r
#define C(r) 2 * PI *r

int main() {
  int r = 5;

  printf("半径为%d的圆,面积是：%.2f.周长是：%.2f\n", r, S(r), C(r));

  return 0;
}