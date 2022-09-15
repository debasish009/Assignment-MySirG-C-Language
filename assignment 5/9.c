main()
{
    int a=-1,b=1,c=1,sum,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(c<=n)
    {
        sum=a+b;
        a=b;
        b=sum;
        c++;
         printf(" %d ",sum);

    }

    getch();
}//
//        main()
//        {
//          int a=-1,b=1,c,i=1,n;
//          printf("enter the number");
//          scanf("%d",&n);
//          while(i<=n)
//            {
//              c=a+b;
//               printf("%d",c);
//               a=b;
//               b=c;
//               i++;
//            }
//           getch();
//         }

