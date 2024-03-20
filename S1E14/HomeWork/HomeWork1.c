/**
 * @file HomeWork1.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-20
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {
  int num = 0;
  long sum = 0L;
  int status;

  do {
    printf("请输入合法的数字：");
    sum = sum + num;
    status = scanf("%d", &num); // 会返回成功接收字符的个数，所以我们只需检查每次调用
                                // scanf 函数的返回值是否为 1 即可
  } while (status == 1);

  printf("结果是: %ld\n", sum);

  return 0;
}

