#include<stdio.h>
#include<conio.h>
#include<string.h>
void palindrom(char[]);
void main()
{
    char s[20];
    printf("enter the string:");
    gets(s);
    palindrom(s);
    getch();

}
void palindrom(char s1[])
{
    char s2[50];
    int i,count=0;
    for(i=0;s1[i];i++)
        s2[i]=s1[i];
    strrev(s1);
    for(i=0;s1[i]&&s2[i];i++)
    {
        if(s1[i]==s2[i])
            count=1;
        else
            count=0;
    }
    if(count==1)
        printf("string is palindrom");
    else
        printf("string is not palindrom");

}
