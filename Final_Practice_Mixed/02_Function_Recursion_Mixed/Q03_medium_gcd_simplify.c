/*
 * ================================================================
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : ห.ร.ม. ค.ร.น. และทอนเศษส่วน
 *  หัวข้อที่ใช้ : Recursion + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับ a b (บวก) หา ห.ร.ม. แบบ recursive, ค.ร.น. และทอนเศษส่วน a/b ให้เป็นอย่างต่ำ
 *    โดย simplify ต้องแก้ค่าตัวแปรใน main ผ่าน pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int gcd(int a, int b);
 *    int lcm(int a, int b);
 *    void simplify(int *num, int *den);
 *
 *  [Input]
 *    a b
 *
 *  [Output]
 *    GCD, LCM, Simplified = num/den
 *
 *  [Test case 1]
 *   Input:
 *      12 18
 *   Output:
 *      GCD = 6
 *      LCM = 36
 *      Simplified = 2/3
 *
 *  [Test case 2]
 *   Input:
 *      7 5
 *   Output:
 *      GCD = 1
 *      LCM = 35
 *      Simplified = 7/5
 *
 *  [คำใบ้]
 *    gcd(a, b) = gcd(b, a % b), base case b == 0 ; lcm = a / gcd * b
 *
 * ================================================================
 */
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);
void simplify(int *num, int *den);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int gcd(int a, int b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int lcm(int a, int b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void simplify(int *num, int *den)
{
    /* เขียนโค้ดที่นี่ */
}
