main()
{
    int a,b,num,count=0,n;
    printf("how many number you want to print:");
    scanf("%d",&n);
    printf("%d prime number are:\n",n);
    for(num=2;num>0;num++)
    {
        b=0;
        for(a=1;a<=num;a++)
        {
            if(num%a==0)
            {
              b++;
            }
        }
        if(b==2)
        {
            printf("%d ",num);
            count++;
        }
        if(n==count)
        {
            break;
        }
    }
    printf("\n THANK YOU");
    getch();
}

