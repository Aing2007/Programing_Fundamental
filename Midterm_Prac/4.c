#include <stdio.h>
int main()
{
    int num;
    char letter = 'A';
    printf("Enter Number Between1-16 :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", letter + j);
        }
        printf("\n");
    }

    return 0;
}