#include<stdio.h>
#include<conio.h>
float circumference(float);
float main()
{
    float r,c;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    c=circumference(r);
    printf("circumference of circle is %f",c);
    getch();
}
float circumference(float r1)
{
    float c1;
    c1=2*3.14*r1;
    return c1;
}
