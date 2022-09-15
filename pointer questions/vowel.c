#include<stdio.h>
#include<conio.h>
int countVowel(char *);
void main()
{
    char str[20];
    printf("enter the string:");
    gets(str);
    countVowel(str);
    getch();
}
int countVowel(char *p)
{
    int i,count=0;
    for(i=0;p[i];i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U'||p[i]=='i')
            count++;
    }
    printf("number of vowel is %d",count);
}
