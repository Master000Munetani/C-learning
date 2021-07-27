01#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d,e;
  a=pow(1,2);
  b=pow(2,3);
  c=pow(3,4);
  d=pow(4,5);
  e=pow(5,6);
  int sum=a+b+c+d+e;
  printf("1^2 + 2^3 + 3^4 + 4^5 + 5^6 的值为：%d\n",sum);
    return 0;
}

02#include<stdio.h>
#include<math.h>
int main()
{
     long long int sum=1,weight=1;
  for(int i=1;i<=64;i++)
  {
    weight=pow(2,i-1);  //使用pow函数来求幂更为简单
    sum+=weight;

  }
  printf("%llu\n",sum)； //注意：此处用%llu来输出无符号位的长长整型

  return 0;
}
