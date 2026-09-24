#include <stdio.h>
int main()
{
    float a, b, c, d, sum, avg;

    printf("\nNumber 1 : ");
    scanf("%f", &a);

    printf("\nNumber 2 : ");
    scanf("%f", &b);

    printf("\nNumber 3 : ");
    scanf("%f", &c);

    printf("\nNumber 4 : ");
    scanf("%f", &d);

    sum = a + b + c + d;
    avg = sum / 4;

    printf("\nSummation is : %.2f\n", sum);
    printf("Average is   : %.3f\n", avg);

    return 0;
}

/*================== Output ==================
Number 1 : 19.01

Number 2 : 22.01

Number 3 : 2.02

Number 4 : 7.11

Summation is : 50.15
Average is   : 12.538
*/