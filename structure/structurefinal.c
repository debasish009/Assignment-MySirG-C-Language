#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void input (struct book *);
void sortbyPrice(struct book *,int);
void display(struct book );
void main()
{
    struct book b[5];
    int i;
    printf("enter data for 5 books:\n");
    for(i=0;i<=4;i++)
        input(&b[i]);
    sortbyPrice(b,5);
    for(i=0;i<=4;i++)
        display(b[i]);
    getch();
}
void input (struct book *p)
{
    printf("enter the bookid,title,price\n");
    scanf("%d",&p->bookid);
    fflush(stdin);
    gets(p->title);
    scanf("%f",&p->price);
}
void sortbyPrice(struct book *p,int size)
{
    struct book tem;
    int r,i;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if((p+i)->price>(p+i+1)->price)
            {
                tem=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=tem;
            }
        }
}
}
void display(struct book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}
