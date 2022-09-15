#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input();
void display(struct book );
void main()
{
    struct book b1={1,"java",340},b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"for c");
    b2.price=345;
    b3=input();
    display(b1);
    display(b2);
    display(b3);
    getch();
}
struct book input()
{
 struct book b;
 printf("enter bookid,title,price:\n");
 scanf("%d",&b.bookid);
 fflush(stdin);
 gets(b.title);
 scanf("%f",&b.price);
 return b;
}
void display(struct book b)
{
    printf("\n%d %s %.2f",b.bookid,b.title,b.price);
}
