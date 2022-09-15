main()
{
    int a=0,b=1,c=3,sum,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(c<=n)
    {
        sum=a+b;
        a=b;
        b=sum;
        c++;
    }
    printf("%d",sum);
    getch();
}

