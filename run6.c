#include<stdio.h>
	int main(void)
	{  
	  int a,b;
	  //Enter a and b:
      //printf("Enter a and b:");
      scanf("%d%d",&a,&b); 
      printf("a=%d b=%d\n",a,b);
	  /*********Begin*********/
	  a = a + b;
      b = a - b;
      a = a - b;
	  
	  /*********End**********/
	  printf("a=%d  b=%d\n",a,b);  
       return 0;
	}