#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,count;
    printf("enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(j=0;j<=9;j++)
    {
        count=0;
        for(i=0;i<=9;i++)
        {
            if(a[j]<a[i])
                count++;
        }
        if(count==9)
        {

            printf("smalest number is %d",a[j]);
            break;
        }
    }
    getch();
}
