#include <stdio.h>
int main()
{
    int num;
    printf("Enter num :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) // บรรทัด
    {
        for (int j = 1; j <= num - i; j++)
        {

            printf(" ");

            if (j == (num - i))
            {
                for (int k = 1; k <= num - j; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
}