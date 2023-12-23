#include <stdio.h>
int main()
{
    int basic, allow, ded, gross;
    printf("Enter Basic Salary: ");
    scanf("%d", &basic);
    printf("Enter Allowance: ");
    scanf("%d", &allow);
    printf("Enter the Deductance: ");
    scanf("%d", &ded);
    gross = basic+allow-ded;
    printf("Gross salary is: %d", gross);
    return 0;
}