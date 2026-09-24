#include <stdio.h>
#include <stdbool.h>
int main()
{
    int matrix[3][3], r = 0;
    bool Is_Identity = true;
    printf("Enter the matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j && matrix[i][j] != 1) // ตรวจ false ง่ายกว่าตรวจทั้งหมด!!!
                Is_Identity = false;
            else if (i != j && matrix[i][j] != 0)
                Is_Identity = false;
        }
    }
    if (Is_Identity)
        printf("The matrix is an identity matrix.");
    else
        printf("The matrix is not an identity matrix.");
    return 0;
}