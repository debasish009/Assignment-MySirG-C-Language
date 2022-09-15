#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,count,sum=0;
    char s[8][30];
    printf("enter 8 strings:\n");
    for(i=0;i<=7;i++)
        gets(s[i]);
    for(i=0;i<=7;i++)
    {
        count=0;
        for(j=0;s[i][j];j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U')
                count++;
        }
        printf("\n number of vowel in %d string is %d",i,count);
        sum=sum+count;
    }
    printf("\n total number of vowel is %d",sum);
    getch();

}
