#include <stdio.h>
int main()
{
    int num[10], position = 1, what;
    for (int j = 0; j < 10; j++)
    {
        printf("Enter num %d : ", j + 1);
        scanf("%d", &num[j]);
    }
    printf("Enter What number you want to find: ");
    scanf("%d", &what);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == what)
            printf("position : %d \n", position);
        position++;
    }

    return 0;
}