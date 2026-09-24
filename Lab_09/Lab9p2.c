#include <stdio.h>
int FindMax(int a, int b)
{
    int max = a;
    if (a < b)
        max = b;
    return max;
}
int main()
{
    int num1, num2, num3, temp;
    printf("Enter number [1] :");
    scanf("%d", &num1);
    printf("Enter number [2] :");
    scanf("%d", &num2);
    printf("Enter number [3] :");
    scanf("%d", &num3);
    temp = FindMax(num1, num2);
    printf("The Max value is : %d", FindMax(temp, num3));
}