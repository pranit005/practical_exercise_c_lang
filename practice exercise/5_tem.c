#include <stdio.h>
int main()
{
    float d, f;
    printf("Enter the tempreture in degree centigrade: ");
    scanf("%f", &d);
    f = (d*9/5)+32;
    printf("The tempreture in fahrenheit is: %f", f);
    return 0;
}