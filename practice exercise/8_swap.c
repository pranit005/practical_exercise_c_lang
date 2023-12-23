#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    n = n+m;
    m = n-m;
    n = n-m;
    printf("After swapping:\nValue of n: %d\nValue of m: %d", n, m);
    return 0;
}