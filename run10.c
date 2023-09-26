#include<stdio.h>
#include<math.h>
int main()
{
    double sales;// 销售额
    scanf("%lf", &sales);
    calBonus(sales);
    return 0;
}

// 完成此函数
void calBonus(double sales) { 
    // 请在此添加你的代码
    /********** Begin ********/
	double m;
    if (sales <= 200000) {
        m = sales * 0.03;
    } else if (sales <= 500000) {
        m = 200000 * 0.03 + (sales - 200000) * 0.025;
    } else {
        m = 200000 * 0.03 + 300000 * 0.025 + (sales - 500000) * 0.02;
    }
	 printf("%.2lf",m);


	/********** End **********/

}