#include<stdio.h>
#include<conio.h>
void input(int *,int);
int* display(int *,int);
int* sort(int *,int);
void main()
{
    int a[10];
    input(a,10);
    display(a,10);
    printf("\nafter sorting:");
    sort(a,10);
    display(a,10);
    getch();
}
void input(int *p,int size)
{
    int i;
    printf("enter %d number:",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
}
int* display(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}
int* sort(int *p,int size)
{
    int i,j,tem;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+i)>*(p+j))
            {
                tem=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=tem;
            }
        }
    }
}
