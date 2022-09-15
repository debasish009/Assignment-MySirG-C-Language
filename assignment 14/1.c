#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count;
    char a,s[20];
    printf("enter the string:");
    gets(s);
    printf("enter the charcter:");
    scanf("%c",&a);
    count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==a)
            count++;
    }
    printf("number of occurance is:%d",count);
    getch();
}
