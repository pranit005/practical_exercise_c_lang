#include <stdio.h>
int main()
{
    int english, hindi, maths, computer, social, total;
    printf("Enter marks out of 100:\nEnglish\nHindi\nMaths\nComputer\nSocial\n:");
    scanf("%d%d%d%d%d", &english, &hindi, &maths, &computer, &social);
    total = english+hindi+maths+computer+social;
    printf("The total marks is: %d\n",total);
    float percent = total/5;
    printf("Percentage is: %f", percent);
    return 0;
}