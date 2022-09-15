#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("\nbefore swaping a=%d,b=%d",a,b);
    swap(&a,&b);//call by refere-nce.
    printf("\nafter swaping a=%d,b=%d",a,b);
    getch();
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
