#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    for (int i = 0; i <= line; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%d", i);
        }
        }
    return 0;
}