#include<stdio.h>
#define PI 3.14
	int main()
	{  
	  /*********Begin*********/
	  double r, h;

      scanf("%lf,%lf", &r,&h);

    double C1 = 2*PI*r;
    double Sb = 4 * PI * r * r;
    double Vb = PI * r * r * h;

    printf("C1=%.2lf\n", C1);
    printf("Sb=%.2lf\n", Sb);
    printf("Vb=%.2lf\n", Vb);
	  
	  /*********End**********/ 
       return 0;
	}
