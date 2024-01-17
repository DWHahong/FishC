/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "stdio.h"

#define FQ 3.7  // 番茄3.7元/kg
#define JL 7    // 芥蓝7元/kg
#define XQ 1.3  // 西芹1.3元/kg
#define KXC 8   // 空心菜8元/kg
#define YC1 2.4 // 洋葱2.4元/kg
#define YC2 9   // 油菜9元/kg
#define HG 6.3  // 黄瓜6.3/kg
#define BLB 0.5 // 白萝卜0.5元/kg

int main() {
  // float xm, xh, xjy; // 小明，小红，小甲鱼
  // xm = (2 * 0.5) * FQ + (1 * 0.5) * KXC +
  //      (1 * 0.5) * YC2; // 小明买 2 斤番茄、1 斤空心菜、1 斤油菜
  // xh = (3 * 0.5) * XQ + (0.5 * 0.5) * YC1 +
  //      (5 * 0.5) * HG; // 小红买 3 斤西芹，半斤洋葱，5 斤黄瓜
  // xjy = (10 * 0.5) * HG + (20 * 0.5) * BLB; // 小甲鱼买 10 斤黄瓜和 20
  // 斤白萝卜

  // printf("小明需要支付%.2f元\n", xm);
  // printf("小红需要支付%.2f元\n", xh);
  // printf("小甲鱼需要支付%.2f元\n", xjy);
/*********************************************************/
/*以下是标准答案，但上方的代码也是正确的*/
  float price;                                       

  price = (2 * FQ + 1 * KXC + 1 * YC2) * 0.5;
  printf("小明需要支付%.2f元\n", price);

  price = (3 * XQ + 0.5 * YC1 + 5 * HG) * 0.5;
  printf("小红需要支付%.2f元\n", price);

  price = (10 * HG + 20 * BLB) * 0.5;
  printf("小甲鱼需要支付%.2f元\n", price);

  return 0;
}