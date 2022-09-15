#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char s[20];
    printf("enter the string:");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]!=32)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    printf("uper case of string is %s",s);
    getch();
}
