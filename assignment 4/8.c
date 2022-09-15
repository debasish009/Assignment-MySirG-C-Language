main()
{
    int a,b;
    printf("How many numbers you want to print:");
    scanf("%d",&b);
    a=2*b;
    while(a>0)
    {
        printf("%d ",a);

        a=a-2;
    }
    getch();
}
