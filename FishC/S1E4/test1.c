#include <stdio.h>

int main() {
  int a;
  char b;
  float c;
  double d;

  a = 520;
  b = 'F';
  c = 3.14;
  d = 3.141592653;

  printf("鱼C工作室创办于2010年的%d\n", a);
  printf("I Love %cishC.com!\n", b);
  printf("圆周率时: %.2f\n", c);//.2代表精确到小数点后两位
  printf("精确到小数点后9位的圆周率时: %11.9f\n", d);//11代表总占宽度，.9代表小数点后9位

  return 0;
}