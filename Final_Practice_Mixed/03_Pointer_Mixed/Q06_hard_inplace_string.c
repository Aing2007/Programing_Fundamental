/*
 * ================================================================
 *  ข้อที่    : 6    |    ระดับ : ยาก
 *  ชื่อโจทย์ : แก้สตริงในที่เดิมด้วย pointer 2 ตัว
 *  หัวข้อที่ใช้ : Char pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับข้อความ 1 บรรทัด (ยาวไม่เกิน 100)
 *    1) ลบช่องว่างทั้งหมดออก (ในที่เดิม)  2) กลับสตริง (ในที่เดิม)
 *    3) ตรวจพาลินโดรม (ไม่สนช่องว่างและตัวพิมพ์)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *    5) ห้าม #include <string.h>
 *
 *  [Prototype ที่ต้องใช้]
 *    void removeSpaces(char *s);
 *    void reverseStr(char *s);
 *    int isPalindromeStr(const char *s);
 *
 *  [Input]
 *    ข้อความ 1 บรรทัด
 *
 *  [Output]
 *    NoSpace = ..., Reverse = ... (ของข้อความต้นฉบับ), Palindrome: Yes/No
 *
 *  [Test case 1]
 *   Input:
 *      never odd or even
 *   Output:
 *      NoSpace = neveroddoreven
 *      Reverse = neve ro ddo reven
 *      Palindrome: Yes
 *
 *  [Test case 2]
 *   Input:
 *      Hello World
 *   Output:
 *      NoSpace = HelloWorld
 *      Reverse = dlroW olleH
 *      Palindrome: No
 *
 *  [คำใบ้]
 *    ต้องคัดลอกข้อความต้นฉบับเก็บไว้ก่อน (เขียน loop คัดลอกเอง) เพราะทั้ง 2 ฟังก์ชันแก้ในที่เดิม
 *    removeSpaces ใช้ pointer อ่าน (r) และ pointer เขียน (w) ชี้สตริงเดียวกัน
 *
 * ================================================================
 */
#include <stdio.h>
#include <ctype.h>

void removeSpaces(char *s);
void reverseStr(char *s);
int isPalindromeStr(const char *s);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void removeSpaces(char *s)
{
    /* เขียนโค้ดที่นี่ */
}

void reverseStr(char *s)
{
    /* เขียนโค้ดที่นี่ */
}

int isPalindromeStr(const char *s)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
