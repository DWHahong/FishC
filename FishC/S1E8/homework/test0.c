#include <stdio.h>

int main() {
  float F;
  float D;
  printf("请输入华氏度:\n");
  scanf("%f", &F);

  D = (F - 32) * 5 / 9;

  printf("转换位摄氏度是:%.2f\n",D);

  return 0;
}