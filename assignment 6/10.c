main()
{
    int num,a,b,count;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("prime factor of %d are: ",num);
    for(a=2;a<=num;a++)
    {
        if(num%a==0)
        {
            count=0;
            for(b=2;b<=a;b++)
            {
                if(a%b==0)
                {
                   count++;
                }
            }
            if(count==1)
            {
                printf("%d ",a);
            }
        }

    }
    getch();
}
