main()
{
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d",count);
    getch();
}
