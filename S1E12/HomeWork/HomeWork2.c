/**
 * @file HomeWork2.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-18
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <Servo.h>

// 为了方便调用，我们为控制左右电机
// 前进后退的数字引脚进行了宏定义
#define LEFT_MOTO_GO 8
#define LEFT_MOTO_BACK 9
#define RIGHT_MOTO_GO 10
#define RIGHT_MOTO_BACK 11

// ...省略部分代码...

void loop() {
  char ch; // 用于接受命令

  switch (ch) {
  case 'g': // 前进
    digitalWrite(LEFT_MOTO_GO, HIGH);
    digitalWrite(LEFT_MOTO_BACK, LOW);
    digitalWrite(RIGHT_MOTO_GO, HIGH);
    digitalWrite(RIGHT_MOTO_BACK, LOW);
    break;
  case 'b': // 后退
    digitalWrite(LEFT_MOTO_GO, LOW);
    digitalWrite(LEFT_MOTO_BACK, HIGH);
    digitalWrite(RIGHT_MOTO_GO, LOW);
    digitalWrite(RIGHT_MOTO_BACK, HIGH);
    break;
  case 'l': // 左转
    digitalWrite(LEFT_MOTO_GO, LOW);
    digitalWrite(LEFT_MOTO_BACK, LOW);
    digitalWrite(RIGHT_MOTO_GO, HIGH);
    digitalWrite(RIGHT_MOTO_BACK, LOW);
    break;
  case 'r': // 右转
    digitalWrite(LEFT_MOTO_GO, HIGH);
    digitalWrite(LEFT_MOTO_BACK, LOW);
    digitalWrite(RIGHT_MOTO_GO, LOW);
    digitalWrite(RIGHT_MOTO_BACK, LOW);
    break;
  default: // 停止
    digitalWrite(LEFT_MOTO_GO, LOW);
    digitalWrite(LEFT_MOTO_BACK, LOW);
    digitalWrite(RIGHT_MOTO_GO, LOW);
    digitalWrite(RIGHT_MOTO_BACK, LOW);
    break;
  }

  // ...省略部分代码...
}