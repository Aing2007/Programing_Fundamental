#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Input number 1:");
    scanf("%d", &num1);
    printf("Input number 2:");
    scanf("%d", &num2);
    while (num2 == 0)
    {
        printf("Error divided by zero, Enter number 2 again :");
        scanf("%d", &num2);
    }
    printf("Devided : %d\n", num1 / num2);
    printf("fraction : %d", num1 % num2);
}