/**
 * @file HomeWork0.c
 * @author King
 * @brief
 * @version 0.1
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <math.h>
#include <stdio.h>

int main() {

  float price, area, yir, mir;    // 单价，面积，年利率，月利率
  float interest, loan;           // 利息，贷款总额
  float ave_repay, down_payment;  // 月均还款，首期还款
  float total_price, total_repay; // 房款总额，还款总额
  float ratio, time;              // 按揭成数，按揭年数

  printf("请输入单价(元/平方):");
  scanf("%f", &price);
  printf("请输入面积:");
  scanf("%f", &area);
  printf("请输入按揭成数:");
  scanf("%f", &ratio);
  printf("请输入按揭年数:");
  scanf("%f", &time);
  printf("请输入当前基准年利率:");
  scanf("%f", &yir);

  //
  //  total_price = price * area;
  //  loan = total_price * ratio / 10.00;
  //  down_payment = total_price - loan;
  //  /*
  //  total_repay = total_price + (loan * yir / 100 * time);
  //  interest = (loan * (yir / 100))* time;
  //  ave_repay = total_repay / (12 * time);
  //  */
  //  // 以下代码参考答案修改而成
  //  time = time * 12;
  //  mir = yir / 100 / 12;
  //  ave_repay = loan * mir * pow((1 + mir), time) / (pow(1 + mir, time) - 1);
  //  // 没搞懂这句 interest = ave_repay * time - loan; total_repay = loan +
  //  interest;
  //
  /****上述代码去掉//也是正确的*******/
  /****以下是标准答案*******/

  mir = yir / 100 / 12; // 年利率需要除以100得到，因为用户输入是5.4(%)，而不是0.054
  time = time * 12;
  total_price = price * area;
  loan = total_price * ratio / 10; // 这里不能写成(ratio / 10)，否则结果会变成0
  ave_repay = loan * mir * pow((1 + mir), time) / (pow((1 + mir), time) - 1);
  interest = ave_repay * time - loan;
  total_repay = loan + interest;
  down_payment = total_price * (1 - (float)ratio / 10); // 强制转换ratio为浮点型

  printf("==========报告结果==========\n");
  printf("房款总额:%.2f元\n", total_price);
  printf("首期付款:%.2f元\n", down_payment);
  printf("贷款总额:%.2f元\n", loan);
  printf("还款总额:%.2f元\n", total_repay);
  printf("支付利息:%.2f元\n", interest);
  printf("月均还款:%.2f元\n", ave_repay);

  return 0;
}