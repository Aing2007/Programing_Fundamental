#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) // บรรทัด
    {

        printf("\n");
        for (j = 1; j <= i; j++) // แสดง *
        {
            printf("*");
            // if (j == i) // ถ้าแสดงครบจำนวนบรรทัด ณ ขณะนั้นแล้ว ให้ไปบรรทัดถัดไป
            // {
            // }
        }
    }
    return 0;
}