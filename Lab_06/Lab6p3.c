#include <stdio.h>
int main()
{
    printf("input  : ");
    int number[10], temp;
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int j = 0; j < 40; j++)
    {
        for (int k = 0; k <= 9; k++)
        {
            if (number[k] < number[k + 1])
            {
                temp = number[k + 1];
                number[k + 1] = number[k];
                number[k] = temp;
            }
        }
    }
    printf("output : ");
    for (int o = 0; o < 10; o++)
        printf("%d ", number[o]);
    return 0;
}