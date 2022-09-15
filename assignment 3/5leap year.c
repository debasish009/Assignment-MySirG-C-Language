main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    getch();
}
