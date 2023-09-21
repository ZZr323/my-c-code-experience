int m;
    int sum=0;
    scanf("%d",&m);
    if (m==2)
        {
            m=m-1;
            sum=0;
        }
    while(m!=1)
    {
        if (m%2==1)
        {
            sum = sum + m;
            m = m - 2;
        }

        if (m%2==0)
        {
            m=m-1;
            sum =sum + m;
            m=m-2;
        }





    }
    sum+=1;
    printf("%d\n",sum);
    return 0;