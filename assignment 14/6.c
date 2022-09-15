#include<stdio.h>
#include<conio.h>
void main()
{
    int i,l;
    char s[20],t;
    printf("enter the string:");
    gets(s);
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;

    }
    printf("after reverse of string : %s",s);
    getch();
}

