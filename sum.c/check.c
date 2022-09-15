#include<stdio.h>
#include<conio.h>
void main()
{
    char s;
    printf("enter the charcter:");
    scanf("%c",&s);
    if(s>='0'&&s<='9')
        printf("it is a number");
    if(s>='a'&&s<='z'||s>='A'&&s<='Z')
        printf("it is a letter");
    if(s>=32&&s<=47||s>=58&&s<=64||s>=91&&s<=96||s>=123&&s<=126)
        printf("it is a special charcter");
    getch();
}
