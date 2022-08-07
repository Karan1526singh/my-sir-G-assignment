//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float circle(float);
int main()
{
    float  r;
    printf("enter a radius of circle : ");
    scanf("%f",&r);
    printf("\n Area of circle is %f",circle(r));
    return 0;
}
float circle(float  x)
{
    float a;
    a=3.14*x*x;
    return a;
}
