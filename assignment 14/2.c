#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char s[20];
    printf("enter the string:");
    gets(s);
    for(i=0;s[i];i++);
    printf("lentgh of string : %d",i);
    getch();
}
