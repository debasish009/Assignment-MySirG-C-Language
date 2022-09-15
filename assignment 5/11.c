main()
{
    int a=0,b=1,num,sum;
    printf("enter the number to check:");
    scanf("%d",&num);
    while(num!=0&&num!=1)
    {
        sum=a+b;
        if(num==sum)
        {
            printf("Term is in fibonacci series");
            break;
        }
        if(sum>num)
        {
            printf("Term is not in fibonacci series");
            break;
        }
        a=b;
        b=sum;
    }
    if(num==0||num==1)
    {
        printf("Term is in fibonacci series");
    }
    printf("\nTHANK YOU");
    getch();
}
