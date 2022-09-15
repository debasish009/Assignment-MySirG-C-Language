#include<stdio.h>
#include<conio.h>
void arm(int,int);
void main()
{
    int x,y;

    arm(x,y);
    getch();
}
void arm(int x1,int y1)
{
    printf("enter the 1st number of range:");
    scanf("%d",&x1);
    printf("enter the last number of range:");
    scanf("%d",&y1);
    int a,b,c,sum;
    for(x1;x1<=y1;x1++)
    {
        c=x1;
        sum=0;
        while(c!=0)
        {
          a=c%10;
          a=a*a*a;
          b=c/10;
          sum=sum+a;
          c=b;
        }
       if(x1==sum)
        printf("%d ",x1);

    }
}





