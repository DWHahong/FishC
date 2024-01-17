/**
 * @file ConstantsAndMacroDefinitions.c
 * @author 常量和宏定义
 * @brief
 * @version 0.1
 * @date 2024-01-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "stdio.h"

// #代表预处理命令
// define代表标识符
#define URL "http://www.fishc.com"//这些都是符号常量，常量不可改变
#define NAME "鱼C工作室"          //这些都是符号常量
#define BOSS "小甲鱼"             //这些都是符号常量
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main() {
  printf("%s成立于%d年%d月%d日\n", NAME, YEAR, MONTH, DAY);
  printf("%s是%s创立的...\n", NAME, BOSS);
  printf("%s的域名是%s\n", NAME, URL);

  return 0;
}