#include<stdio.h>
#include<conio.h>
int compare(char[],char[]);
void main()
{
    char s1[20],s2[20];
    int a;
    printf("enter the 1st string:");
    gets(s1);
    printf("enter the 2nd string:");
    gets(s2);
    a=compare(s1,s2);
    if(a==0)
        printf("string are same");
    else
        printf("string are not same");
    getch();
}
int compare(char s1[],char s2[])
{
    int i,count;
    count=0;
    for(i=0;s1[i]&&s2[i];i++)
    {
        if(s1[i]==s2[i])
            count=1;
        else
            count=0;
    }
    if(count==1)
        return 0;
    else
        return 1;
}
