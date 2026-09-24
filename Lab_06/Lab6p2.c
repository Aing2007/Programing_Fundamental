#include <stdio.h>
int main()
{
    int Matrix[3][3][2], C[3][3] = {0, 0, 0,
                                    0, 0, 0,
                                    0, 0, 0}; // ต้องกำหนดด้วย เพื่อกันไม่ให้หยิบค่าเริ่มต้นมามั่วๆ
    for (int k = 0; k < 2; k++)               // นับมิติที่ 1[A] มิติที่ 2[B]
    {
        switch (k)
        {
        case 0:
            printf("Enter matrix A :\n");
            break;
        case 1:
            printf("Enter matrix B :\n");
            break;

        default:
            break;
        }
        for (int i = 0; i < 3; i++) // แนวนอน
        {
            for (int j = 0; j < 3; j++) // แนวตั้ง
            {
                scanf("%d", &Matrix[i][j][k]);
            }
        }
        printf("\n");
    }
    //====================== ส่วน Process ==========
    printf("The Matric C = A x B is : \n");

    for (int i2 = 0; i2 < 3; i2++)
    {
        for (int j2 = 0; j2 < 3; j2++)
        {
            for (int k2 = 0; k2 < 3; k2++)
            {
                C[i2][j2] += (Matrix[i2][k2][0] * Matrix[k2][j2][1]);
            }
            printf("%d ", C[i2][j2]);
        }
        printf("\n");
    }

    return 0;
}