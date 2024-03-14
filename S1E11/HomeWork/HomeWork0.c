/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-03-14
 *
 * @copyright Copyright (c) 2024
 *
 */
 //C like Algol-68

#include <stdio.h>

#define INT int
#define BEGIN {
#define END }
#define IF if(
#define DO ){
#define ELSE }else { 



INT main() 
BEGIN 

INT i;
printf("请输入您的年龄:");
scanf("%d", &i);

IF i < 18 DO
    printf("您未满18周岁，不得使用这个程序\n");
ELSE
    printf("您已满18周岁,欢迎使用本程序，嘿嘿嘿....\n");
END

    return 0;
END