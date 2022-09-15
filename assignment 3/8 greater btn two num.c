main()
{
    int a,b;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    if(a==b)
    {
        printf("both are same number");
    }
    else
    {
        if(a>b)
        {
        printf("%d is greater",a);
        }
        else
        {
            printf("%d is greater",b);
        }
    }
    getch();
}
