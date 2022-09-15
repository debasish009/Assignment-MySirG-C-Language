main()
{
    int a=1,b;
    printf("how many number you want to print: ");
    scanf("%d",&b);
    while(a<=b)
    {
        printf("%d ",a*a);
        a++;
    }
    getch();
}
