main()
{
    int a,b,num;
    printf("prime number are:\n");
    for(num=2;num<=100;num++)
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
        }
    }
    getch();
}
