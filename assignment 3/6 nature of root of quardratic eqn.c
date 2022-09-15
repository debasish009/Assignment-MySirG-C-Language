  main()
  {
    float a,b,c,d;
    printf("enter the coefficient of x \n");
    scanf("%f",&a);
    printf("enter the coefficient of y \n");
    scanf("%f",&b);
    printf("enter the constant value \n");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    if(d>=0)
    {
        printf("the roots are real");
    }
    else
    {
        printf("roots are imaginary");
    }
    getch();
  }
