#include<stdio.h>
#include<conio.h>
void star();
void main()
{
    star();
    getch();
}
void star()
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        x=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i&&x)
                {
                    printf("*");
                    x=0;
                }
            else
            {
                printf(" ");
                x=1;
            }
        }
        printf("\n");
    }

}
