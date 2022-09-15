#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
    int n,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=prime(n);
    printf("%d",x);
    getch();
}
int prime(int n1)
{
    int a,b,f;
    n1++;
    for(n1;n1!=0;n1++)
     {
         b=0;
         for(a=1;a<=n1;a++)
         {
             if(n1%a==0)
                b++;
         }
         if(b==2)
         {
             f=n1;
             return f;
         }
     }

}
