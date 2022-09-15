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
    int n;
    printf("how many total number of index:");
    scanf("%d",&n);
    int i,a[n];
    printf("\n enter numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    getch();
}
