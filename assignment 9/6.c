
#include<stdio.h>
#include<stdio.h>
int print(int);
int main()
{
    int n,sum;
    printf("how many number you want to print:");
    scanf("%d",&n);
    sum=print(n);
    printf("sum=%d",sum);
    getch();
}
int print(int n1)
{
    int a,sum1=0;
    for(a=1;a<=n1;a++)
    {
     sum1=sum1+(a*a);
    }
    return sum1;
}

