main()
{
    int a;
    printf("enter the Nth number ");
    scanf("%d",&a);
    while(a!=0)
    {
        printf("%d ",a);
        a=a--;
    }
    getch();
}

