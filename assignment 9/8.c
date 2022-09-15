#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int a,n;
    printf("enter the number:");
    scanf("%d",&n);
    a=fact(n);
    printf("factorial of %d is %d",n,a);
    getch();
}
int fact(int n1)
{
    int a,m=1;
    for(a=1;a<=n1;a++)
    {
        m=m*a;
    }
    return m;
}
