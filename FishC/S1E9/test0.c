#include <math.h>
#include <stdio.h>

int main() {
  int i, j, k;

  i = 1 + 2;//=3
  j = 1 + 2 * 3;//=7
  k = i + j + -1 + pow(2, 3);//3+7+ -1 + 8=17

  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("k = %d\n", k);

  return 0;
}