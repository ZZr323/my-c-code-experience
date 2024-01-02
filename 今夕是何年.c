#include <stdio.h>
int fun(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }else return 0;
}
int main() {
    int n,year,month,day,s=0,f,m;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d-%d-%d", &year, &month, &day);
        s=0;
        if (month==2 && day==29){
            while(1){
            f=fun(year);
            if (f==1)  s+=2;
            if (f==0)  s+=1;
            year++;
            m=fun(year);
            if(s%7==0&&m==1)    break;
            }
            printf("%d\n",year);
        }else if(month<2||(month==2&&day<=28)){
            while (1){
            f=fun(year);
            if (f==1)  s+=2;
            if (f==0)  s+=1;
            year++;
            if (s%7==0) break;
            
        }
        printf("%d\n",year);
        }else {
            while (1){
            year++;
            f=fun(year);
            if (f==1)  s+=2;
            if (f==0)  s+=1;
            if (s%7==0) break;
            
        }
        printf("%d\n",year);
        }
    }
    return 0;
}