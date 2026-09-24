#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter Number :");
    scanf("%d", &num);
    for (int i = 0; i <= num; i += 2)
    {
        sum += i;
    }
    printf("Summary of Odd number before %d is : %d", num, sum);
    return 0;
}