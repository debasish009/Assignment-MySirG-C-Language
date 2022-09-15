#include<stdio.h>
#include<conio.h>
int check(int);
void main()
{
    int a,n;
    printf("enter the number:");
    scanf("%d",&n);
    a=check(n);
    printf("%d",a);
    getch();
}
int check(int n1)
{
    int a1;
    if(n1%2==0)
    {
        a1=1;
        return a1;
    }
    else
    {
        a1=0;
        return a1;
    }
}
