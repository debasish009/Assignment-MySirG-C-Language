
main()
{
    int num1,num2,a,hcf;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    for(a=1;a<=num1;a++)
    {
        if(num1%a==0&&num2%a==0)
        {
          hcf=a;
        }
    }
     printf("HCF of %d and %d is %d",num1,num2,hcf);
    printf("\nTHANK YOU");
    getch();
}
