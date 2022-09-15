#include<stdio.h>
#include<conio.h>
int occurance(char[],char);
void main()
{
    int a;
    char s[20],c;
    printf("enter the 1st string:");
    gets(s);
    printf("enter the character:");
    scanf("%c",&c);
    a=occurance(s,c);
    printf("1st index of given character is %d",a);
    getch();
}
int occurance(char s[],char c)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
            break;
    }
    return i;
}
