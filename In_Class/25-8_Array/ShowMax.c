#include <stdio.h>
int main()
{
    int number[10], temp;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number [%d] : ", i + 1);
        scanf("%d", &number[i]);
    }
    for (int l = 0; l <= 40; l++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (number[j] > number[j + 1])
            {
                temp = number[j + 1];      // เก็บค่าที่จะถุกแทนไว้ก่อน
                number[j + 1] = number[j]; // สลับค่ากัน
                number[j] = temp;          // ตัวที่ถูกสลับถูกคืนค่า
            }
        }
    }
    for (int k = 0; k < 10; k++)
        printf("%d ", number[k]);
    printf("\nMax is : %d ", number[9]);

    return 0;
}