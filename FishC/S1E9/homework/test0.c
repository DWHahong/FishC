#include <stdio.h>

int main() {
  // int a = 2, b = 1;
  // printf("%d\n", a / 'b');

  // int a;
  //(a = 2) + 3 * 4;
  // printf("a = %d\n", a);

  float fah, cel;

  printf("请输入摄氏度: ");
  scanf("%f", &cel);
  // fah = 9 / 5 * cel + 32;
  fah = (cel * 9) / 5 + 32;
  printf("转换为华氏度是:%.2f\n", fah);

  return 0;
}