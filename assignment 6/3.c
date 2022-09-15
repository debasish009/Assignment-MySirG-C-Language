main()
{
    int a,b,num1,num2;
    printf("from which to which number between you want print:");
    scanf("%d%d",&num1,&num2);
    printf("prime number between %d to %d are:\n",num1,num2);
    for(num1;num1<=num2;num1++)
    {
        b=0;
        for(a=1;a<=num1;a++)
        {
            if(num1%a==0)
            {
              b++;
            }
        }
        if(b==2)
        {
            printf("%d ",num1);
        }
    }
    getch();
}

