#include "stdio.h"
#define N 10
void reverse(int *p, int a, int b)
{
	int c;
	
	/***** 请在以下一行填写代码 *****/
	while (a<b)
	
	{
		c=*(p+a);
		
	/***** 请在以下一行填写代码 *****/
		*(p+a)=*(p+b);
		
		*(p+b)=c;
		
		a++;
	/***** 请在以下一行填写代码 *****/
		b--		;
				
	}
}
int main()
{
	int a[N], i;
	for (i=0; i<N; i++)
		
	/***** 请在以下一行填写代码 *****/
		scanf("%d",&a[i]     );
	
	reverse(a, 0, N-1);
	
	for (i=0; i<N; i++)
		
	/***** 请在以下一行填写代码 *****/
		if(a[i]>10)	printf("%-3d",a[i]);
        
    	else	printf("%-2d",a[i]);

		
	printf("\n");
	
	return 0;
}