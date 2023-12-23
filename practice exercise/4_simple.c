#include <stdio.h>
int main()
{
    float s, p, r, t;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period: ");
    scanf("%f", &t);
    s = (p*r*t)/100;
    printf("The simple interest is: %f", s);    
    return 0;
}