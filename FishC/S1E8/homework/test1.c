#include <stdio.h>

int main() {
  char name[256];
  float hight, weight;
  float in, lb;
  printf("请输入您的姓名:");
  scanf("%s", &name);
  printf("请输入您的身高(cm):");
  scanf("%f", &hight);
  printf("请输入您的体重(kg):");
  scanf("%f", &weight);

  printf("==========正在为您转换==========\n");

  in = hight / 2.54;
  lb = weight / 0.4536;

  printf("%s的身高是%.2f(in),体重是%.2f(lb)。\n", name, in, lb);

  return 0;
}