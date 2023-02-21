#include <stdio.h>

int main() {
  int i;
  char j;
  float k;

  i = 123;
  j = 'C';
  k = 3.14;

  printf("size of int is %lu\n", sizeof(int));
  printf("size of i is %lu\n", sizeof(i));
  printf("size of char is %lu\n", sizeof(char));
  printf("size of j is %lu\n", sizeof j);
  printf("size of float is %lu\n", sizeof(float));
  printf("size of k is %lu\n", sizeof k);

  return 0;
}