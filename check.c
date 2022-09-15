#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,tem;
    printf("enter 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
            for(j=i+1;j<=9;j++)
            {
                if(a[i]>a[j])
                {
                    tem=a[j];
                    a[j]=a[i];
                    a[i]=tem;
                }

            }
    }
  for(i=0;i<10;i++)
    printf(" %d",a[i]);
  getch();
}
