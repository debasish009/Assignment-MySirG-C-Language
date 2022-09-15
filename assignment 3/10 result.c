main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    double percent;
    printf("total=500 \n");
    printf("maximum mark is 100 for each subject \n");
    printf("enter the mark of sub-1 \n");
    scanf("%d",&sub1);
    printf("enter the mark of sub-2 \n");
    scanf("%d",&sub2);
    printf("enter the mark of sub-3 \n");
    scanf("%d",&sub3);
    printf("enter the mark of sub-4 \n");
    scanf("%d",&sub4);
    printf("enter the mark of sub-5 \n");
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percent= total/500.0*100;
    printf("total secured=%d\n",total);
    printf("percent=%lf%% \n",percent);
    if(sub1>=30&&sub2>=30&&sub3>=30&&sub4>=30&&sub5>=30)
    {
        if(percent>=30&&percent<=50)
        {
            printf("3rd DIVISION");
        }
         if(percent>=50&&percent<=60)
         {
             printf("2nd DIVISION");
         }
         if(percent>=60)
         {
             printf("1st DIVISION");
         }

    }
    else
    {
        printf("FAIL");
    }
    getch();
}
