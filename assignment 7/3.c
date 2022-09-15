main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=1;j--)
        {
            if(j<=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
}
