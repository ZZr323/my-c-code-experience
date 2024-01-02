#include <stdio.h>
#include <string.h>

struct  person
{
	char name[8];
	int count;
};

int main()
{
	int i,j;
	char name[8];
	struct  person leader[5]={"zhang",0,"sun",0,"li",0,"yang",0,"zhao",0 };

	for(i=1;i<=10;i++)
	{
		/***** 在以下一行填写代码 *****/
					      scanf("%s",name);                //输入候选人姓名
					 
        
					 
		 for(j=0;j<5;j++)
		/***** 在以下一行填写代码 *****/
			  if(        strcmp(leader[j].name,name)==0           )   //若第j个候选人名字与输入的名字相同
			  

			  
		/***** 在以下一行填写代码 *****/
					             (leader[j].count)+=1;           //第j个候选人票数加1
					   
              
		
	}
	
	printf("投票结果：\n");
	printf("姓名      票数\n");
	for(j=0;j<5;j++)
		
		/***** 在以下一行填写代码 *****/
		 printf("%-10s%d\n",          leader[j].name,leader[j].count    );     //输出各候选人的名字和票数
		 

		 
	return 0;
}
