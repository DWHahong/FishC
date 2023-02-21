#include <stdio.h>

int main() {
  /*
  char name[5];
  name[0] = 'F';
  name[1] = 'i';
  name[2] = 's';
  name[3] = 'h';
  name[4] = 'C';
  */

  // char name[6] = {'F', 'i', 's', 'h', 'C',
  // '\0'};//建议加个\0停止位，以免不同系统下出现因没有停止位而导致的BUG
  char name[] = {"FishC"};

  printf("%s\n", name);
  printf("Hello\n");

  return 0;
}