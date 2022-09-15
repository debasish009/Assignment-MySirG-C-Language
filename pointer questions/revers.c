#include<stdio.h>
#include<conio.h>
char* reverse(char *);
void main()
{
    char str[20];
    printf("enter the string:");
    gets(str);
    printf("\noriginal string:%s",str);
    reverse(str);
    printf("\nreversed string:%s",str);
    getch();
}
char* reverse(char *p)
{
    int i,l,t;
    for(l=0;p[l];l++);
    for(i=0;i<l/2;i++)
    {
        t=p[i];
        p[i]=p[l-1-i];
        p[l-1-i]=t;
    }
    return p;
}
