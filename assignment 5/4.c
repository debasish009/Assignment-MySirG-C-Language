main()
{
    int a=1,b,fact=1;
    printf("enter the number:");
    scanf("%d",&b);
    if(b==0)
        printf("factorial is %d",b);
   else
        while(a<=b)
    {
        fact=fact*b;
        b--;
    }
    printf("factorial is %d",fact);
    getch();
}
