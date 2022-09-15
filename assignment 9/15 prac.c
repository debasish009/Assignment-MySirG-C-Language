void armstrong();
int main()
{
    armstrong();
    getch();
}


void armstrong()
{
    int a,b,x,d,sum,e=0;
    printf("Enter two number to find all armstrong num between them:");
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        x=a;
        sum=0;
        while(x>0)
        {
            d=x%10;
            x=x/10;
            d=d*d*d;
            sum=sum+d;
        }
        if(a==sum||a==0)
        {
            printf("%d\n",a);
            e++;
        }
    }
    if(e==0)
        printf("no armstrong num");
    getch();
}
