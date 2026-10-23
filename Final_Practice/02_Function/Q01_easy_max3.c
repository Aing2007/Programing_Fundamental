/*
 * ==============================================================
 *  หัวข้อ    : Function
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : ฟังก์ชันหาค่ามากสุดของ 3 จำนวน
 * ==============================================================
 *  [โจทย์]
 *    เขียนฟังก์ชัน  int max3(int a, int b, int c);
 *    คืนค่าที่มากที่สุด แล้วเรียกใช้ใน main
 *
 *  [Input]
 *    จำนวนเต็ม 3 จำนวน
 *
 *  [Output]
 *    ค่ามากที่สุด
 *
 *  [Test case 1]
 *   Input:
 *      3 9 5
 *   Output:
 *      Max = 9
 *
 *  [Test case 2]
 *   Input:
 *      -1 -7 -3
 *   Output:
 *      Max = -1
 *
 *  [Test case 3]
 *   Input:
 *      4 4 4
 *   Output:
 *      Max = 4
 *
 *  [ข้อกำหนด / คำใบ้]
 *    ฝึกเขียน function prototype ไว้เหนือ main และตัวฟังก์ชันไว้ใต้ main
 *
 * ==============================================================
 */
#include <stdio.h>
int findMax(int, int);
int main(void)
{
    int num1, num2, num3;
    printf("num 1:");
    scanf("%d", &num1);
    printf("num 2:");
    scanf("%d", &num2);
    printf("num 3:");
    scanf("%d", &num3);
    int result = findMax(num1, num2);
    printf("%d", findMax(num3, result));
    return 0;
}
int findMax(int a, int b)
{
    int Max = a;
    if (Max < b)
        Max = b;
    return Max;
}
