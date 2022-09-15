#include<stdio.h>
#include<conio.h>
int countWords(char *);
void main()
{
    char str[20];
    printf("enter the string:");
    gets(str);
    countWords(str);
    getch();
}
int countWords(char *p)
{
    int i,count=0;
    for(i=0;p[i];i++)
    {
        if(p[i]==32)
            count++;
    }
    printf("number of words:%d",count+1);
}
