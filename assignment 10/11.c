#include<stdio.h>
#include<conio.h>
int f1(int);
void main()
{
    int n,s;
    printf("enter the number:");
    scanf("%d",&n);
    s=f1(n);
    printf("sum of digit is %d",s);
    getch();
}
int f1(int n1)
{
    int s1;
    if(n1>0)
    {
    s1=n1%10+f1(n1/10);
    return s1;
    }
}

