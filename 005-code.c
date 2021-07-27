00#include <stdio.h>

#define NL '\n'

int main()
{
        printf("Line1%c", NL);  //通过逗号来实现printf打印输出的方式同样适用于所定义的宏常量
        printf("Line2%c", NL);

        return 0;
}

01#include<stdio.h>
#define PI  3.1415926
#define S(r) (r*r*PI)   //define定义 的常量部分可以使用未知数计算式的形式，不过最后在主函数里面要定义相同的变量来计算
#define C(r)  2*PI*r
int main()
{
  int r=5;
  printf("半径为%d的圆，其周长为%.2f,其面积为%.2f",r,C(r),S(r));
  return 0;
}

//我写的
02#include<stdio.h>
#define FQ 3.7
#define JL 7
#define XQ 1.3
#define KXC 8
#define YANGC 2.4
#define YOUC 9
#define HG 6.3
#define BLB 0.5
int main()
{
  printf("小明需要支付%.2f元\n",(FQ+KXC*0.5+YOUC*0.5));
  printf("小红需要支付%.2f元\n",(XQ*3*0.5+YANGC*0.25+2.5*HG));
  printf("LYS需要支付%.2f元\n",(5*HG+10*BLB));

  return 0;
}


//标准答案
02#include <stdio.h>

#define FANQIE  3.7
#define JIELAN  7
#define XIQIN   1.3
#define KONGXINCAI      8
#define YANGCONG        2.4
#define YOUCAI  9
#define HUANGGUA        6.3
#define BAILUOBO        0.5

int main()
{
        float price;  //在主函数里面直接定义计算变量再打印输出要更为简便

        price = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5; // 1斤 == 0.5公斤
        printf("小明需要支付%.2f元\n", price);

        price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
        printf("小红需要支付%.2f元\n", price);

        price = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;
        printf("小甲鱼需要支付%.2f元\n", price);

        return 0;
}
