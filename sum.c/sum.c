#include<conio.h>
#include<stdio.h>
void main()
{
    int i=1,sum=0;
    float avg;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    avg=sum/10.0;
    printf("%.3f",avg);
    getch();
}
