/**
 * @file DataType.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "stdio.h"

int main() {
  // sizeof用于获得数据类型或表达式的长度
  int i;
  char j;
  float k;

  i = 123;
  j = 'C';
  k = 3.14;

  printf("size of int is %d\n", sizeof(int));    //sizef其实应该用%lu而不是%d，但也可以正常输出   
  printf("size of i is %d\n", sizeof(i));
  printf("size of char is %d\n", sizeof(char));
  printf("size of j is %d\n", sizeof(j));
  printf("size of float is %d\n", sizeof(float));
  printf("size of k is %d\n", sizeof(k));

  return 0;
}