main()
{
    int num1,num2,x;
    printf("enter the 1st number:\n");
    scanf("%d",&num1);

    printf("enter the second number:\n");
    scanf("%d",&num2);
     printf("enter 1 for addition\nenter 2 for substraction\nenter 3 for multiplication\nenter 4 for division\nenter 6 for exit\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
    case 2:
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
    case 3:
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case 4:
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    case 5:
        break;

    }
}
