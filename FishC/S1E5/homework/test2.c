#include <stdio.h>

#define A 3.7 // 番茄3.7元/kg
#define B 7   // 芥兰7元/kg
#define C 1.3 // 西芹1.3元/kg
#define D 8   // 空心菜8元/kg
#define E 2.4 // 洋葱2.4元/kg
#define F 9   // 油菜9元/kg
#define G 6.3 // 黄瓜6.3元/kg
#define H 0.5 // 白萝卜0.5元/kg

int main() {
  float ming, hong, yu;
  ming = (((2 * A) + (1 * D) + (1 * F)) * 0.5);
  hong = (((3 * C) + (0.5 * E) + (5 * G)) * 0.5);
  yu = (((10 * G) + (20 * H)) * 0.5);

  printf("小明需要支付%.2f元\n", ming);
  printf("小红需要支付%.2f元\n", hong);
  printf("小甲鱼需要支付%.2f元\n", yu);

  return 0;
}