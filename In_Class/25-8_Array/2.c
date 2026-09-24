#include <stdio.h>
int main()
{
    int matrix[3][3], rmax = 0, cmax = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("Enter Matrix [%d][%d]:", r, c);
            scanf("%d", &matrix[r][c]);
            if (matrix[rmax][cmax] < matrix[r][c])
            {
                rmax = r;
                cmax = c;
            }
        }
        printf("\n");
    }
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    printf("Max Value is : %d \n", matrix[rmax][cmax]);
    printf("Position of Max Value is : [%d] [%d]", rmax, cmax);

    return 0;
}