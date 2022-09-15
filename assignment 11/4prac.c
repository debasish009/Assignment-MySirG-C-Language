#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],max;
    printf("enter the 10 number of array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("greater number is:%d",max);
    getch();
}
