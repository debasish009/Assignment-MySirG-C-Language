#include<stdio.h>
#include<conio.h>
int compare(char[],char[]);
void main()
{
    char s1[20],s2[20],num;
    printf("enter the 1st string:");
    gets(s1);
    printf("enter the 2nd string:");
    gets(s2);
    num=compare(s1,s2);
    if(num==1)
        printf("string are same");
    else
        printf("string are different");
    getch();
}
int compare(char s1[],char s2[])
{
    int i,count=0;
    for(i=0;s1[i]&&s2[i];i++)
    {
        if(s1[i]==s2[i]||s1[i]==s2[i]+32||s1[i]==s2[i]-32)
          count=1;
    }
 if(count==1)
     return 1;
 else
    return 0;
}



