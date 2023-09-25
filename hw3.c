#include <stdio.h>
#include <math.h>
int main() 
{
   double r0,r1,r2,r3,r5,p,p1,p2,p3,p4,p5;
   p = 1000;
   r0 = 0.0035;
   r1 = 0.015;
   r2 = 0.021;
   r3 = 0.0275;
   r5 = 0.03;
   p1 = p * (1 + r5 * 5); 				 //一年存五次期。
   p2 = p * (1 + 2 * r2) * (1 + 3 * r3); //先存2年期，到期后将本息再存3年期。
   p3 = p * (1 + 3 * r3) * (1 + 2 * r2); //先存3年期，到期后将本息再存2年期。
   p4 = p * pow(1 + r1, 5);              //存1年期，到期后将本息再存1年期，连续存5次。
   p5 = p * pow(1 + r0/4,4*5); 			 //存活期存款。活期利息每一季度结算一次。
   printf("p1=%10.2lf\n", p1);			 //输出按第1种方案得到的本息和。
   printf("p2=%10.2lf\n", p2); 			 //输出按第2种方案得到的本息和。
   printf("p3=%10.2lf\n", p3); 			 //输出按第3种方案得到的本息和。
   printf("p4=%10.2lf\n", p4); 			 //输出按第4种方案得到的本息和。
   printf("p5=%10.2lf\n", p5); 			 //输出按第5种方案得到的本息和。

   return 0;


}