#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    printf("enter the string:");
    gets(b);
    strcpy(a,b);
    printf("%s",a);
    getch();
}
