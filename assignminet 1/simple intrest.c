main()
{
    float s,p,r,t;
    printf("enter the principle amount\n");
    scanf("%f",&p);
    printf("enter the rate of intrest \n");
    scanf("%f",&r);
    printf("enter the time period\n");
    scanf("%f",&t);
    s=p*r*t/100;
    printf("SIMPLE INTREST IS %f",s);
    getch();

}
