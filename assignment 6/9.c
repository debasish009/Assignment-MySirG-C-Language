main()
{
    int num,a;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("factors of %d are:\n",num);
    for(a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            printf("%d ",a);
        }
    }
    getch();
}
