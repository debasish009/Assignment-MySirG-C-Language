main()
{
    int a,b,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("next prime number of %d is:",num);
    num++;
    for(num;num!=0;num++)
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
            printf("%d",num);
            break;
        }
    }
    getch();
}
