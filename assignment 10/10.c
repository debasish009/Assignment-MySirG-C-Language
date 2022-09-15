
#include<stdio.h>
#include<conio.h>
int f1(int);
void main()
{
    int n,s;
    printf("enter the number:");
    scanf("%d",&n);
    s=f1(n);
    printf("sum of %d is %d",n,s);
    getch();
}
int f1(int n1)
{
    int s1;
    if(n1==1)
        return 1;

    s1=n1*n1+f1(n1-1);
    return s1;
}
