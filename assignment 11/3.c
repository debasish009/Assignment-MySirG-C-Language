#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,even_sum=0,odd_sum=0;
    printf("enter 10 numbers:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            even_sum=even_sum+a[i];
        else
            odd_sum=odd_sum+a[i];
    }
    printf("sum of even number is %d\n",even_sum);
    printf("sum of odd number is %d",odd_sum);
    getch();

}
