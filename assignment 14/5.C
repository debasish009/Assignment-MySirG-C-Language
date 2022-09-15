#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char s[20];
    printf("enter the string:");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]!=32)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }
    printf("%s",s);
    getch();
}
