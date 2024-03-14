/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-14
 *
 * @copyright Copyright (c) 2024
 *
 */
// 此程序不用编译
#include "ssebtr1.h"
#include <stdio.h>

int main() {
  int age, max_hr, bpm, hr; // hr即HeartRate，心率

  printf("请输入您的年龄:");
  scanf("%d", &age);

  max_hr = 220 - age;
  bpm = 150;

  playSound(bpm);
  hr = getHeartRate();

  if (hr > max_hr) {
    printf("请马上停止跑步，否则会有绳命危险...\n");
  } else if (hr > max_hr * 0.85) {
    printf("请放慢脚步\n");
    bpm = bpm - 20;
    playSound(bpm);
  } else if (hr < max_hr * 0.75) {
    printf("Come On,请加快节奏!\n");
    bpm = bpm + 20;
    playSound(bpm)
  } else {
    playSound(bpm)
  }

  return 0;
}