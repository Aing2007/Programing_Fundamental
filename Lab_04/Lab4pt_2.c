#include <stdio.h>
int main()
{
    float num = 0.00, sum = 0.00;
    int i = 1;
    do
    {
        printf("Number %d :", i);
        scanf("%f", &num);
        sum += num;
        i++;
    } while (num != 0);
    printf("Summation is : %f", sum);
    return 0;
}
