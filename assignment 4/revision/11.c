main()
{
    int a=1,b;
    printf("how many number you want to print: ");
    scanf("%d",&b);
    while(a<=2*b-1)
    {
        printf("%d ",a);
        a=a+2;
    }
    getch();
}
