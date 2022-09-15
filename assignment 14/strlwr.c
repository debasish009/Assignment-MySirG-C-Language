#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[30];
    printf("enter the string:");
    gets(str);
    printf("%s",strlwr(str));
    getch();
}
