#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],min;
    printf("enter the 10 number of array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=9;j++)
    {
        min=a[0];
        for(i=1;i<=9;i++)
        {
        if(a[i]<min)
            min=a[i];
        }
        b[j]=min;
      printf("smallest number is :%d",min);
      getch();
    }
}

