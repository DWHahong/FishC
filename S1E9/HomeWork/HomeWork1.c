/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <math.h>
#include <stdio.h>

int main() {
  float price = 10000.00;
  float P1, P2, P3;

  P1 = price * (1 + 2.75 / 100 * 5);

  printf("一次性定期存5年的本息和是:%.2f\n", P1);

  P2 = price * (1 + 2.75 / 100 * 3) * (1 + 2.25 / 100 * 2);
  printf("先存 3 年定期，到期后本息再存 2 年定期的本息和是:%.2f\n", P2);

  P3 = price * pow((1 + 1.35 / 100), 5);
  printf("存 1 年定期，到期后本息再存 1 年定期，连续存 5 次的本息和是:%.2f\n",P3);

  return 0;
}