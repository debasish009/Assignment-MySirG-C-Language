main()
{
    int num1,num2,a,count=0;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    for(a=2;a<=num1;a++)
    {
        if(num1%a==0&&num2%a==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("number %d and %d are co-prime",num1,num2);
    }
    else
    {
        printf("number %d and %d are not co-prime\n",num1,num2);
    }
    printf("\nTHANK YOU");
    getch();
}
