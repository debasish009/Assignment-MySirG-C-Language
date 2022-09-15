main()
{
    int a=1,b,sum=0;
    printf("enter the nth term:");
    scanf("%d",&b);
    while(a<=b)
    {
        sum=a*a*a+sum;
        a++;
    }
    printf("%d",sum);
    getch();
}
