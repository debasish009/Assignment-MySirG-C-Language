#include<stdio.h>
#include<conio.h>
void f1(int);
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    f1(n);
    getch();
}
void f1(int n1)
{
    if(n1>0)
    {
        printf("%d ",2*n1-1);
        f1(n1-1);
    }
}


