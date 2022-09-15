main()
{
    int a,b=1,final;
    printf("enter the number:");
    scanf("%d",&a);
    while(a!=0&&b<=10)
    {
        final=a*b;
        b++;
        printf("%d ",final);
    }
    getch();
}
