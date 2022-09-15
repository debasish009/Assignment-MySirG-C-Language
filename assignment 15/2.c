#include<stdio.h>
#include<conio.h>
int count(char[]);
void main()
{
    char s[20];
    int num;
    printf("enter the string:");
    gets(s);
    num=count(s);
    printf("number of vowels is %d",num);
    getch();
}
int count(char s[])
{
    int i,count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            count++;
    }
    return count;
}

