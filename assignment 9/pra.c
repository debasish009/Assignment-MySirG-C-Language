main()
{
      int x1,y1,a,b,c,sum;
      printf("enter the numbers");
      scanf("%d%d",&x1,&y1);
      while(x1<=y1)
    {
        c=x1;
        sum=0;
        while(x1!=0)
        {
          a=x1%10;
          b=x1/10;
          sum=sum+(a*a*a);
          x1=b;
        }
       if(c==sum)
        printf("%d ",c);
       x1++;
    }
    getch();
}
