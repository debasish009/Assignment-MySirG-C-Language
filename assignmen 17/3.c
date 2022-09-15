#include<stdio.h>
#include<conio.h>
void sortbyPrice(struct book *,int );
struct employe
{
    int empid;
    char name[20];
    float salary;
};
void sortbyPrice(struct book *p,int size) //q.6
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
