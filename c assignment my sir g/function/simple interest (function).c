//Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float SI(float p, float r, float t)
{
    int s;
    s=(p * r * t) / 100;
    return s;
}
int main()
{
    float p, r, t;
    printf("Enter the value of P R T ");
    scanf("%f%f%f", &p, &r, &t);
    printf("simple intrest %f", SI(p,r,t));
    return 0;
}
