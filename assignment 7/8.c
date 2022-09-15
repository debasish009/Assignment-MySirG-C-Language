main()
{
    int i,j,n;
    for(i=1;i<=4;i++)
    {
        n=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {


                   printf(" %d ",n);
                   j<4?n++:n--;

            }
            else
            {
              printf("   ");
            }

        }
        printf("\n");
    }
    getch();
}

