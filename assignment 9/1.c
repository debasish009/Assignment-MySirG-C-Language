#include<stdio.h>
#include<conio.h>
 float area(float);
void main()
{
    float r1,a1;
    printf("enter the radius of circle");
    scanf("%f",&r1);
    a1=area(r1);
    printf("area of circle is %f",a1);
    getch();
}
float area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
