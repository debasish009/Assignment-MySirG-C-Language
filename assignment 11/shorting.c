#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,min,a[10],tem;
    printf("enter the 10 number of array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(j=0;j<=9;j++)
    {
        for(i=j+1;i<=9;i++)
        {
            if(a[i]<a[j])
            {



               tem=a[j];
               a[j]=a[i];
              a[i]=tem;
             }
       }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
getch();
}
