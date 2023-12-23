#include <stdio.h>
int main()
{
    int n, m, temp;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    temp = n;
    n = m;
    m = temp;
    printf("After swaping\nThe value of n = %d\nThe value of m = %d",n, m);
    return 0;
}