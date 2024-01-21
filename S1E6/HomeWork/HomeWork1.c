/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "math.h"
#include "stdio.h"
#include <math.h>

int main() {
  unsigned long long int sum, temp, weight;

  int i;
  sum = 0;

  for (i = 0; i < 64; i++) {
    temp = pow(2, i);

    sum = sum + temp;
  }

  weight = sum / 25000;

  printf("舍罕王应该给予达依尔%llu粒麦子!\n", sum);
  printf("如果每25000粒麦子为1KG,那么应该给%llu公斤麦子! \n", weight);

  return 0;
}