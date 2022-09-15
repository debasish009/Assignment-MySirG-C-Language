#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a;
    char s[20];
    printf("enter the string:");
    gets(s);
    a=strlen(s);
    printf("length=%d",a);
    getch();
}
