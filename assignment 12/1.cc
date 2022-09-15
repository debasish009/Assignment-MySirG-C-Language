#include<stdio.h>
#include<conio.h>
void f1(int,int);
int main()
{
    int a[10],i;
    printf("enter the number:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     f1(a,10);
}
void f1(int b[],int s)
{
    int i;
    for(i=0;i<=s-1;i++)
    {
        if(i==s-1)
            b[0]=b[s-1];
        b[i+1]=b[i];
    }
    for(i=0;i<=s-1;i++)
        printf("%d",b[i]);
    getch();
}

