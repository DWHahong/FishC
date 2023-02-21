#include <math.h>
#include <stdio.h>

int main() {
  unsigned long long sum = 0;
  unsigned long long temp;
  unsigned long long weight;
  int i;

  for (i = 0; i < 64; i++) {
    temp = pow(2, i);
    sum = sum + temp;
  }

  weight = sum / 25000;

  printf("舍罕王应该给予达依尔%llu\n", sum);
  printf("如果每25000粒麦子为1KG,那么应该给%llu公斤麦子!\n", weight);

  return 0;
}
