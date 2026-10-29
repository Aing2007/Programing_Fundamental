/*
 * ================================================================
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : Recursion พื้นฐาน 3 ฟังก์ชัน
 *  หัวข้อที่ใช้ : Recursion
 * ================================================================
 *  [โจทย์]
 *    รับ base และ exp (exp >= 0) คำนวณ base^exp แบบ recursive
 *    แล้วนำผลลัพธ์ไปหาผลรวมเลขโดดและจำนวนหลักแบบ recursive
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *    5) ทั้ง 3 ฟังก์ชันต้องเขียนแบบ recursive ห้ามใช้ loop
 *
 *  [Prototype ที่ต้องใช้]
 *    int power(int base, int exp);
 *    int sumDigits(int n);
 *    int countDigits(int n);
 *
 *  [Input]
 *    base exp (ผลลัพธ์ไม่เกิน int)
 *
 *  [Output]
 *    Power, Sum of digits, Digits
 *
 *  [Test case 1]
 *   Input:
 *      2 10
 *   Output:
 *      Power = 1024
 *      Sum of digits = 7
 *      Digits = 4
 *
 *  [Test case 2]
 *   Input:
 *      3 4
 *   Output:
 *      Power = 81
 *      Sum of digits = 9
 *      Digits = 2
 *
 *  [Test case 3]
 *   Input:
 *      5 0
 *   Output:
 *      Power = 1
 *      Sum of digits = 1
 *      Digits = 1
 *
 *  [คำใบ้]
 *    ทุกฟังก์ชันห้ามใช้ loop (for/while) ; base case: exp==0, n<10
 *
 * ================================================================
 */
#include <stdio.h>

int power(int base, int exp);
int sumDigits(int n);
int countDigits(int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int power(int base, int exp)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int sumDigits(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int countDigits(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
