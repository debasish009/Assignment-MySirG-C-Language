#include<stdio.h>
#include<conio.h>
int alphaNumeric(char *);
void main()
{
    char str[20];
    fflush(stdin);
    printf("enter the string:");
    gets(str);
    alphaNumeric(str);
    getch();
}
int alphaNumeric(char *p)
{
    int i,a=0,b=0;
     for(i=0;p[i];i++)
    {
        if(p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z')
            a=1;
        if(p[i]>='0'&&p  [i]<='9')
            b=1;
    }
    if(a==1&&b==1)
        printf("alphanumeric");
    else
        printf("not alphanumeric");
}
