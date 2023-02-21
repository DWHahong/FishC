#include <math.h>
#include <stdio.h>

int main() {
  unsigned int result = pow(2, 32) - 1;

  printf("result = %u\n", result); // unsigned要用u来输出

  return 0;
}