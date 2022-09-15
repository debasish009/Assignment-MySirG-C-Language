#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{


    int a,n;
    printf("enter the number:");
    scanf("%d",&n);
    a=prime(n);
    printf("%d",a);
    getch();
}
int prime(int n1)
{
    int a,f,b=0;
    for(a=1;a<=n1;a++)
    {
        if(n1%a==0)
            b++;
    }
        if(b==2)
            f=1;
        else
            f=0;
        return f;
}
