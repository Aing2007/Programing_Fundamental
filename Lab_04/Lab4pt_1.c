#include <stdio.h>
int main()
{
    int time, i = 1;
    float num = 0, sum = 0;
    printf("Enter number :");
    scanf("%d", &time);
    while (i <= time)
    {
        printf("Number %d :", i);
        scanf("%f", &num);
        sum = sum + num;
        i++;
    }
    printf("Summation is : %f", sum);
}