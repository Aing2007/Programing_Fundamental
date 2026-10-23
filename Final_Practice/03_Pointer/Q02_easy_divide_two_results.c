/*
 * ==============================================================
 *  หัวข้อ    : Pointer
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : คืนค่า 2 ค่าผ่าน pointer
 * ==============================================================
 *  [โจทย์]
 *    เขียนฟังก์ชัน  void divide(int a, int b, int *q, int *r);
 *    เก็บผลหารไว้ที่ *q และเศษไว้ที่ *r
 *
 *  [Input]
 *    จำนวนเต็ม a b (b != 0)
 *
 *  [Output]
 *    Quotient และ Remainder
 *
 *  [Test case 1]
 *   Input:
 *      17 5
 *   Output:
 *      Quotient = 3
 *      Remainder = 2
 *
 *  [Test case 2]
 *   Input:
 *      20 4
 *   Output:
 *      Quotient = 5
 *      Remainder = 0
 *
 * ==============================================================
 */
#include <stdio.h>
int main(void)
{
    int a, b, num, *p;
    float *r, n;
    scanf("%d", &a);
    scanf("%d", &b);
    num = a / b;
    n = (float)a / (float)b;
    r = &n;
    p = &num;
    printf("%d\n", *p);
    printf("%.2f", *r - *p);
    return 0;
}
