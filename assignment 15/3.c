#include<stdio.h>
#include<conio.h>
void capital(char[]);
void main()
{
    char s[20];
    printf("enter the string:");
    gets(s);
    capital(s);
    getch();
}
void capital(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]!=36)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    printf("after capitalization:%s",s);
}
