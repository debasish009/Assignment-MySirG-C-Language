main()
{
    int a=2,b;
    printf("how much number you want to print :");
    scanf("%d",&b);
    while(a<=2*b)
    {
        printf("%d ",a);
        a=a+2;
    }
    getch();
}
