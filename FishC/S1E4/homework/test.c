#include <stdio.h>

int main() {
  int a, b;
  b = 3;

  a = b;
  b = b * 2;
  printf("a的值是:%d\n", a);
  printf("b的值是:%d\n", b);

  return 0;
}