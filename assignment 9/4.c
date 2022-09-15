
#include<stdio.h>
#include<stdio.h>
int print(int);
int main()
{
    int n;
    printf("how many number you want to print:");
    scanf("%d",&n);
    print(n);
    getch();
}
int print(int n1)
{
    int a;
    for(a=1;a<=n1;a++)
    {
        printf("%d ",2*a);
    }
}
