#include<stdio.h>
#include<conio.h>
int occurance(char [],char);
void main()
{
    int a;
    char s[20],c;
    printf("enter the string:");
    gets(s);
    printf("enter the charcter:");
    scanf("%c",&c);
    a=occurance(s,c);
    printf("occurance of given charcter is %d",a);
    getch();
}
int occurance(char s[],char c)
{
    int i,count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
            count++;
    }
    return count;
}
