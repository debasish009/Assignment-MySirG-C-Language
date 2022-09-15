main()
{
    int a,b,c;
    printf("enter 1st num \n");
    scanf("%d",&a);
    printf("enter 2nd num \n");
    scanf("%d",&b);
    printf("enter 3rd num \n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater",a);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greater",b);
        }
        else
        {
            printf("%d is greater",c);
        }
    }
    getch();
}
