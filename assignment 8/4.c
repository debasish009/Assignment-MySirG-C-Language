main()
{
    int x,s1,s2,s3;
    printf("enter the 1st length:");
    scanf("%d",&s1);
    printf("enter the 2nd length:");
    scanf("%d",&s2);
    printf("enter the 3rd length:");
    scanf("%d",&s3);
    printf("to check press \n 1 for isoscales\n 2 for right angle triangle\n 3 for equilateral triangle\n 4 for exit\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        if(s1==s2||s1==s3||s2==s3)
            printf("isoscales triangle");
        else
            printf("not isoscales triangle");
        break;
    case 2:
        if((s1*s1)+(s2*s2)==(s3*s3)||(s2*s2)+(s3*s3)==(s1*s1)||(s3*s3)+(s1*s1)==(s2*s2))
            printf("right angle triangle");
        else
            printf("not right angle triangle");
        break;
    case 3:
        if(s1==s2&&s2==s3)
            printf("equilateral triangle");
        else
            printf("not equilateral triangle");
        break;
    case 4:
        break;
        getch();
    default:
        printf("enter the valid case");
        break;


    }
    getch();

}
