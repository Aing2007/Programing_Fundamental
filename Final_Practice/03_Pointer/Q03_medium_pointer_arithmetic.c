/*
 * ==============================================================
 *  หัวข้อ    : Pointer
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : เข้าถึงอาร์เรย์ด้วย pointer arithmetic
 * ==============================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัวลงอาร์เรย์ หาผลรวม และพิมพ์ย้อนกลับ
 *    ** ห้ามใช้เครื่องหมาย [ ] ในการเข้าถึงสมาชิก (ยกเว้นตอนประกาศอาร์เรย์)
 *       ให้ใช้ *(p + i) หรือเลื่อน pointer ด้วย p++ / p-- เท่านั้น
 *
 *  [Input]
 *    บรรทัดแรก: n (1 <= n <= 100)
 *    บรรทัดที่สอง: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Sum และ Reverse
 *
 *  [Test case 1]
 *   Input:
 *      5
 *      1 2 3 4 5
 *   Output:
 *      Sum = 15
 *      Reverse: 5 4 3 2 1
 *
 *  [Test case 2]
 *   Input:
 *      2
 *      -4 10
 *   Output:
 *      Sum = 6
 *      Reverse: 10 -4
 *
 *  [ข้อกำหนด / คำใบ้]
 *    scanf("%d", p + i);  สังเกตว่าไม่ต้องใส่ & เพราะ p + i เป็น address อยู่แล้ว
 *
 * ==============================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *num, n;
    scanf("%d", &n);
    num = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(num + i));
        sum += *(num + i);
    }
    printf("\n");
    printf("sum = %d \n", sum);
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(num + i));
    }
    return 0;
}
