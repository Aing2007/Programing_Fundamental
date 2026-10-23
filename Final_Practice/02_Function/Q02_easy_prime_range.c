/*
 * ==============================================================
 *  หัวข้อ    : Function
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : จำนวนเฉพาะในช่วง
 * ==============================================================
 *  [โจทย์]
 *    เขียนฟังก์ชัน  int isPrime(int n);  คืน 1 ถ้า n เป็นจำนวนเฉพาะ มิฉะนั้นคืน 0
 *    แล้วใช้พิมพ์จำนวนเฉพาะทั้งหมดในช่วง [a, b] พร้อมจำนวนที่พบ
 *
 *  [Input]
 *    จำนวนเต็ม a b (1 <= a <= b <= 10000)
 *
 *  [Output]
 *    บรรทัดแรก: จำนวนเฉพาะคั่นด้วยช่องว่าง
 *    บรรทัดที่สอง: Count = จำนวนที่พบ
 *
 *  [Test case 1]
 *   Input:
 *      10 30
 *   Output:
 *      11 13 17 19 23 29
 *      Count = 6
 *
 *  [Test case 2]
 *   Input:
 *      1 10
 *   Output:
 *      2 3 5 7
 *      Count = 4
 *
 *  [ข้อกำหนด / คำใบ้]
 *    1 ไม่ใช่จำนวนเฉพาะ
 *
 * ==============================================================
 */
#include <stdio.h>
int Isprime(int);
int main(void)
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for (int i = num1; i < num2; i++)
    {
        if (Isprime(i) == 1)
            printf("%d ", i);
    }
    return 0;
}
int Isprime(int n)
{
    int Isprime = 1;
    if (n < 2 || n % 2 == 0)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 3; i < n; i++)
    {
        if (n % i == 0)
        {
            Isprime = 0;
            return Isprime;
        }
    }
    return Isprime;
}
