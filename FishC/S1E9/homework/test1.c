#include <math.h>
#include <stdio.h>

int main() {
  float price, area, yir, mir;    // 单价、面积、年利率、月利率
  float interest, loan;           // 利息、贷款总额
  float ave_repay, down_payment;  // 月均还款、首期付款
  float total_price, total_repay; // 房款总额、还款总额
  float ratio, time;              // 按揭成数、按揭年数

  printf("请输入单价(元/平方): ");
  scanf("%f", &price);
  printf("请输入面积: ");
  scanf("%f", &area);
  printf("请输入按揭成数: ");
  scanf("%f", &ratio);
  printf("请输入按揭年数: ");
  scanf("%f", &time);
  printf("请输入当前基准年利率: ");
  scanf("%f", &yir);

    mir = yir / 100 / 12; // 月利率

    time = time * 12; // 将年份转换为月份

    total_price = price * area; // 房款总额 = 单价 * 面积

    down_payment =
        (1 - ratio / 10) * total_price; // 首期付款 = 还款总额*(1-按揭成数)

    // loan = total_price - down_payment; // 贷款总额 = 房款总额 - 首期付款
    loan = total_price * ratio / 10;

    ave_repay = loan * (mir * pow((1 + mir), time)) /
                (pow((1 + mir), time) - 1); // 月均还款

    interest = time * ave_repay - loan; // 总利息

    total_repay = interest + loan;

  printf("==========报告结果==========\n");
  printf("房款总额:%.2f元\n", total_price);
  printf("首期付款:%.2f元\n", down_payment);
  printf("贷款总额:%.2f元\n", loan);
  printf("还款总额:%.2f元\n", total_repay);
  printf("支付利息:%.2f元\n", interest);
  printf("月均还款:%.2f元\n", ave_repay);

  return 0;
}