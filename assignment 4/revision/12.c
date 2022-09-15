main()
{
    int a,b;
    printf("how many number you want to print ");
    scanf("%d",&b);
    a=2*b-1;
    while(a>=1)
    {
        printf("%d ",a);
        a=a-2;
    }
    getch();
}
