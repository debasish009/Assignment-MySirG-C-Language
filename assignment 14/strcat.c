#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    char c[20];
    printf("enter the first string:");
    gets(a);
    printf("enter the second string: ");
    gets(b);
    printf("%s",strcat(a,b));
        getch();
}
