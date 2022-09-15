main()
{
    int i,j;
    char x;
    for(i=1;i<=4;i++)
    {
        x='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%c",x);
                j<4?x++:x--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    x--;
            }
        }
        printf("\n");
    }
    getch();
}
