#include<stdio.h>
#include<conio.h>
void arm(int);
void main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    arm(x);
    getch();
}
void arm(int x1)
{
    int a,b,c,sum=0;
    c=x1;
    while(x1!=0)
    {
        a=x1%10;
        b=x1/10;
        sum=sum+(a*a*a);
        x1=b;
    }
    if(c==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}

