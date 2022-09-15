#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string:");
    gets(str);
    printf("%s",strupr(str));
    getch();
}
