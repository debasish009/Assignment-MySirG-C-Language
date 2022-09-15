#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("original value of a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swping a=%d and b=%d",a,b);
    getch();
}
void swap(int *a,int *b)
{
    int tem;
    tem=*a;
    *a=*b;
    *b=tem;
}
