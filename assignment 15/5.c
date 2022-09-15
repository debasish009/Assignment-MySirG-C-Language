#include<stdio.h>
#include<conio.h>
int word(char[]);
void main()
{
    char s[50];
    int num;
    printf("enter the sentence:");
    gets(s);
    num=word(s);
    printf("number of word is %d",num);
    getch();
}
int word(char s[])
{
    int i,count=1;
    for(i=0;s[i];i++)
    {
        if(s[i]==32)
            count++;
    }
    return count;
}
