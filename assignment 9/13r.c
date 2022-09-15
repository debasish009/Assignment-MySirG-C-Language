#include<stdio.h>
#include<conio.h>
int prime(int,int);
void main()
{
    int a,n;
    printf("from when u wnt to print:");
    scanf("%d",&a);
    printf("to which u wnt print:");
    scanf("%d",&n);
    prime(a,n);
    getch();
}
int prime(int a1,int n1)
{
    int i,b;
    for(a1;a1<=n1;a1++)
    {
        b=0;
        for(i=1;i<=a1;i++)
        {
            if(a1%i==0)
                b++;
        }
        if(b==2)
            printf("%d ",a1);
    }
}
