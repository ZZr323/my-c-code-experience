#include<stdio.h>
#include<string.h>
void string(char a[],char ch)
{
    /*********begin*********/
    int len=strlen(a);
    int i,j;
	for (i=0,j=0;i<len;i++){
        if (a[i]!=ch){
			a[j]=a[i];
            j++;
        }
    }
	a[j]='\0';
    /*********end*********/
}
int main()
{
    /*********begin*********/
	char a[100],ch;
	fgets(a,sizeof(a),stdin);
    scanf("%c",&ch);
    string(a,ch);
    printf("%s",a);
    

    /*********end*********/
}