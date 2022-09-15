#include<stdio.h>
#include<conio.h>
void reverse(char[]);
void main()
{
    char s[20];
    printf("enter the string:");
    gets(s);
    reverse(s);
    getch();
}
void reverse(char s[])
{
    int l,i;
    char t;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }
    printf("after reverse:%s",s);

}
