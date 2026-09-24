#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter Number :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("summation (1 to %d) : %d", num, sum);
}