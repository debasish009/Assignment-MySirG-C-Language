main()
{
    int a=1,b,sum=0;
    printf("enter the nth number:");
    scanf("%d",&b);
    while(a<=b)
    {
        sum=a*a+sum;
        a++;
    }
    printf("%d",sum);
    getch();
}
