int find_min_value_index(int a[],int size,int j)
{
    int min,minindex;
    min=a[j];
    minindex=j;
    for(j=j+1;j<size;j++)
    if(a[j]<min)
    {
        min=a[j];
        minindex=j;
    }
   return minindex;
}
void sort(int a[],int size)
{
    int t,i,minindex;
    for(i=0;i<size-1;i++)
    {
        minindex=find_min_value_index(a,size,i);
        t=a[i];
        a[i]=a[minindex];
        a[minindex]=t;
    }
}
main()
{
    int i,a[]={30,50,20,10,60,80};
    sort(a,6);
    for(i=0;i<=5;i++)
        printf("%d ",a[i]);
    getch();
}
