#include <stdio.h>
int main()
{
    int x, y, z, big;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    big = z;
    if (x>y){
        if (x>z){
            big = x;
        }
    }
    if (y>x){
        if (y>z){
            big = y;
        }
    }
    printf("The biggest number is: %d", big);
    return 0;
}