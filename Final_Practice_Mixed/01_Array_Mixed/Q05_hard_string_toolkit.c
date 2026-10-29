/*
 * ================================================================
 *  ข้อที่    : 5    |    ระดับ : ยาก
 *  ชื่อโจทย์ : ชุดฟังก์ชันจัดการสตริง (ห้ามใช้ string.h)
 *  หัวข้อที่ใช้ : Char array + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับข้อความ 1 บรรทัด (มีช่องว่างได้ ยาวไม่เกิน 100) แล้ว
 *    หาความยาว แปลงเป็นตัวพิมพ์ใหญ่ นับจำนวนคำ และนับสระ (a e i o u ไม่สนตัวพิมพ์)
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
 *    int myStrlen(const char *s);
 *    void toUpperStr(char *s);
 *    int countWords(const char *s);
 *    int countVowels(const char *s);
 *
 *  [Input]
 *    ข้อความ 1 บรรทัด
 *
 *  [Output]
 *    Length, Upper, Words, Vowels
 *
 *  [Test case 1]
 *   Input:
 *      Hello World from KMITL
 *   Output:
 *      Length = 22
 *      Upper = HELLO WORLD FROM KMITL
 *      Words = 4
 *      Vowels = 5
 *
 *  [Test case 2]
 *   Input:
 *        c
 *   Output:
 *      Length = 5
 *      Upper =   C
 *      Words = 1
 *      Vowels = 0
 *
 *  [คำใบ้]
 *    อ่านด้วย fgets แล้วตัด '\n' ออกเอง ; ห้าม include <string.h> (ใช้ <ctype.h> ได้)
 *    นับคำ: นับตำแหน่งที่ตัวอักษรปัจจุบันไม่ใช่ช่องว่าง แต่ตัวก่อนหน้าเป็นช่องว่าง (หรือเป็นตัวแรก)
 *
 * ================================================================
 */
#include <stdio.h>
#include <ctype.h>

int myStrlen(const char *s);
void toUpperStr(char *s);
int countWords(const char *s);
int countVowels(const char *s);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int myStrlen(const char *s)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void toUpperStr(char *s)
{
    /* เขียนโค้ดที่นี่ */
}

int countWords(const char *s)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int countVowels(const char *s)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
