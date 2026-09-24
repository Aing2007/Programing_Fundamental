#include <stdio.h>
int main()
{
    int number[20], temp;
    for (int i = 0; i < 20; i++)
    {
        printf("Enter Number [%d] : ", i + 1);
        scanf("%d", &number[i]);
    }
    for (int j = 0; j < 40; j++)
    {
        for (int k = 0; k <= 19; k++)
        {
            if (number[k] > number[k + 1])
            {
                temp = number[k + 1];
                number[k + 1] = number[k];
                number[k] = temp;
            }
        }
    }
    for (int o = 0; o < 20; o++)
        printf("%d ", number[o]);
    return 0;
}