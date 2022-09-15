main()
{
    int num1,num2,a,b,m1,m2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    for(a=1;num1>0;a++)
    {
        m1=num1*a;
        for(b=1;num2>0;b++)
        {
            m2=num2*b;
            if(m1==m2)
            {

                break;
            }
            if(m1<m2)
                break;
        }
    if(m1==m2)
        break;

    }
    printf("LCM of %d and %d is %d",num1,num2,m1);
    getch();
}
