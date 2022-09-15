main()
{
    int a=1,b,sum=0;
    printf("enter the nth term:");
    scanf("%d",&b);
    while(a<2*b)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("%d",sum);
    getch();
}
