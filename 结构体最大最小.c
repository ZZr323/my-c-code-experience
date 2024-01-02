#include <stdio.h>
#include <string.h>
#define N 10
typedef struct ss
{
	char num[10]; 
	int s; 

} STU;
	
void fun( STU a[], STU *s )
{
	/********** Begin **********/
   int minIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (a[i].s < a[minIndex].s)
        {
            minIndex = i;
        }
    }

    strcpy(s->num, a[minIndex].num);
    s->s = a[minIndex].s;
	
	

	/********** End **********/
}/*STD fun(STD std[], int n)
{
	
	STD max; int i;
	
	max=std[0];
	

	for(i=1; i<n; i++)
		
	if(max.age<std[i].age)
		max=std[i];
	
        返回结构体变量的函数
	
	return max;
}*/

int main ( )
{
	STU a[N]={ {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
				{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} }, m ;
	int i;
	
	printf("***** The original data *****\n");
	for ( i=0; i< N; i++ )
		printf("No = %s Mark = %d\n", a[i].num,a[i].s);
	
	fun ( a, &m );
	
	printf ("***** THE  RESULT *****\n");
	printf ("The lowest : %s , %d\n",m.num, m.s);
	
	return 0;
}

