#include<stdio.h>
#include<conio.h>
void alphanumeric(char[]);
void main()
{
    char s[20];
    printf("enter the string:");
    gets(s);
    alphanumeric(s);
    getch();
}
void alphanumeric(char s[])
{
    int i,a=0,b=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            a=1;
        if(s[i]>='0'&&s[i]<='9')
            b=1;
    }
    if(a==1&&b==1)
        printf("string is alphanumeric");
    else
        printf("string is not alphanumeric");
}
