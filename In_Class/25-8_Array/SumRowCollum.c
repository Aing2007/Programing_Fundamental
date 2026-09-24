#include <stdio.h>
int main()
{
    int matrix[3][4] = {1, 2, 3, 4,
                        2, 3, 4, 5,
                        3, 4, 5, 6};
    int row = 0, collum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            row += matrix[i][j];
        }
        printf("Sum of row %d is : %d", i, row);
        printf("\n");
        row = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            collum += matrix[j][i];
        }
        printf("Sum of collum %d is : %d", i, collum);
        printf("\n");
        collum = 0;
    }

    return 0;
}