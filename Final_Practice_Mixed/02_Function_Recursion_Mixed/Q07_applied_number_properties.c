/*
 * ================================================================
 *  ข้อที่    : 7    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : คุณสมบัติของจำนวน
 *  หัวข้อที่ใช้ : Function + Recursion + Loop
 * ================================================================
 *  [โจทย์]
 *    รับ n ตรวจว่าเป็น Perfect number (ผลรวมตัวหารแท้ = n) และ Armstrong number
 *    (ผลรวมของแต่ละหลักยกกำลังจำนวนหลัก = n) แล้วพิมพ์ลำดับฟีโบนักชีทุกตัวที่ <= n
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int isPerfect(int n);
 *    int countDigits(int n);
 *    int power(int base, int exp);
 *    int isArmstrong(int n);
 *    int fib(int k);
 *
 *  [Input]
 *    n (1 <= n <= 100000)
 *
 *  [Output]
 *    Perfect: Yes/No, Armstrong: Yes/No, Fibonacci: ...
 *
 *  [Test case 1]
 *   Input:
 *      28
 *   Output:
 *      Perfect: Yes
 *      Armstrong: No
 *      Fibonacci: 0 1 1 2 3 5 8 13 21
 *
 *  [Test case 2]
 *   Input:
 *      153
 *   Output:
 *      Perfect: No
 *      Armstrong: Yes
 *      Fibonacci: 0 1 1 2 3 5 8 13 21 34 55 89 144
 *
 *  [คำใบ้]
 *    isArmstrong ต้องเรียก countDigits และ power ; fib เป็น recursive (fib(0)=0, fib(1)=1)
 *    ใน main วน k = 0,1,2,... จนกว่า fib(k) > n
 *
 * ================================================================
 */
#include <stdio.h>

int isPerfect(int n);
int countDigits(int n);
int power(int base, int exp);
int isArmstrong(int n);
int fib(int k);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int isPerfect(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int countDigits(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int power(int base, int exp)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int isArmstrong(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int fib(int k)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
