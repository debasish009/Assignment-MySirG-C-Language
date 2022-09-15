#include<stdio.h>
#include<conio.h>
int f1(int);
void main()
{
    int n,s;
    printf("enter the number");
    scanf("%d",&n);
    f1(n);
    getch();
}
int f1(int n1)
{
    int s1;
    if(n1>0)
    {
        printf("%d",n1%10);
        f1(n1/10);

    }
}
