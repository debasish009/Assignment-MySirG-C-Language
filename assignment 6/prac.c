main()
{
    int i,n;
    for(n=2;n<100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
            printf("%d\n",n);
        }
    }
    getch();
}

