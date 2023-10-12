#include <stdio.h>
int main()
{
	//获取参数方式 scanf
    //int x  =0;
    //int y = 0;
    //scanf("%d", &x);

    //结果输出使用prinf
    //printf("%d",x);

 	// 请在此添加你的代码
    /********** Begin *********/
    int n;
    scanf("%d", &n);

    double num = 2.0;  // 分子
    double den = 1.0;  // 分母
    double sum = 0.0;  // 总和

    for (int i = 1; i <= n; i++) {
        sum += num / den;
        double temp = num;
        num = num + den;
        den = temp;
    }

    printf("n=%d,sum=%f\n",n,sum);

    return 0;


	/********** End **********/


}