main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        printf("%d",a%10);
        a=a/10;
    }
        getch();
}
