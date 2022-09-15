#include<stdio.h>
#include<conio.h>
int f1(int);
void main()
{
    int n,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=f1(n);
    printf("%d",x);
    getch();
}
int f1(int n1)
{
    int s;
    if(n1==1)
        return 2;
    s=f1(n1-1);
    printf("%d ",s);
    return 2*n1;
}

