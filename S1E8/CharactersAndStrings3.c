/**
 * @file CharactersAndStrings3.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-23
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
int main() {
  // char name[5] = {'F','i','s','h','C'};

  // char name[6] =
  // {'F','i','s','h','C','\0'};//建议在后面加一位做结束位“\0”,上面的语句用clang16编译是正常的

  // char name[] =
  // {'F','i','s','h','C','\0'};//或不指定字符数目，直接空过去也可以

  // char name[] = {"FishC"}; // 或直接输入字符串常量,编译器会自动添加\0

  char name[] = "FishC"; // 甚至可以去掉大括号

  printf("%s\n", name);
  printf("Hello!\n");

  return 0;
}