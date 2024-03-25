/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {

  char ch;
  int a, e, i, o, u;
  a = 0;
  e = 0;
  i = 0;
  o = 0;
  u = 0;

  printf("请输入一个英文句子:");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case 'a':
    case 'A':
      a++;
      break;
    case 'e':
    case 'E':
      e++;
      break;
    case 'i':
    case 'I':
      i++;
      break;
    case 'o':
    case 'O':
      o++;
      break;
    case 'u':
    case 'U':
      u++;
      break;
    }
  }

  printf("您输入的句子中，包含原因字母%d个~\n", a + e + i + o + u);
  printf("其中a(%d),e(%d),i(%d),o(%d),u(%d)\n", a, e, i, o, u);

  return 0;
  ;
}