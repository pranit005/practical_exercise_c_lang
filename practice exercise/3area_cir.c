#include <stdio.h>
int main()
{
    float r, area, cir;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = 3.14*r*r;
    cir = 2*3.14*r;
    printf("The area is: %f\nThe circumference is: %f", area, cir);
    return 0;
}