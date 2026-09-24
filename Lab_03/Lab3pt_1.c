#include <stdio.h>

int main()
{
    float num, num2, num3, num4, num5;
    printf("Enter number 1 : ");
    scanf("%f", &num);
    printf("Enter number 2 : ");
    scanf("%f", &num2);
    printf("Enter number 3 : ");
    scanf("%f", &num3);
    printf("Enter number 4 : ");
    scanf("%f", &num4);
    float SUM = num + num2 + num3 + num4;
    printf("Summation is :%.2f", SUM);
    return 0;
}

/*========================= output ==========================
Enter number 1 : 20.0
Enter number 2 : 28.28
Enter number 3 : 12.00
Enter number 4 : 9.2
Summation is :69.48 */