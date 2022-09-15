main()
{
    int a,b=0,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            b++;
        }
    }
    if(b>2)
    {
        printf("not prime number");
    }
    else
    {
        printf("prime number");
    }
    getch();
}
