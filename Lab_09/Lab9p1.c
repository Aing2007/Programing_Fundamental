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
    int num1, num2;
    printf("Enter number [1] :");
    scanf("%d", &num1);
    printf("Enter number [2] :");
    scanf("%d", &num2);
    printf("The output Value of function Findmax is : %d", FindMax(num1, num2));
}