/*
 * ================================================================
 *  ข้อที่    : 4    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : เขียน strcmp / strcat / strchr เอง
 *  หัวข้อที่ใช้ : Char pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับคำ 2 คำ (ไม่มีช่องว่าง ยาวไม่เกิน 50) และตัวอักษร 1 ตัว
 *    เปรียบเทียบคำ ต่อคำ และหาตำแหน่งแรกของตัวอักษรในคำที่ต่อแล้ว
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
 *    int myStrcmp(const char *a, const char *b);
 *    char *myStrcat(char *dest, const char *src);
 *    char *findChar(const char *s, char c);
 *
 *  [Input]
 *    บรรทัด 1: คำที่ 1 คำที่ 2
 *    บรรทัด 2: ตัวอักษร
 *
 *  [Output]
 *    บรรทัด 1: "a < b" / "a == b" / "a > b" (ตามผล myStrcmp)
 *    บรรทัด 2: Concat = คำที่ต่อแล้ว
 *    บรรทัด 3: Found at index k หรือ Not found
 *
 *  [Test case 1]
 *   Input:
 *      apple pie
 *      p
 *   Output:
 *      apple < pie
 *      Concat = applepie
 *      Found at index 1
 *
 *  [Test case 2]
 *   Input:
 *      zoo apple
 *      x
 *   Output:
 *      zoo > apple
 *      Concat = zooapple
 *      Not found
 *
 *  [คำใบ้]
 *    myStrcmp คืนค่าลบ/0/บวก ; findChar คืน NULL ถ้าไม่พบ ; index = ptr - s
 *
 * ================================================================
 */
#include <stdio.h>

int myStrcmp(const char *a, const char *b);
char *myStrcat(char *dest, const char *src);
char *findChar(const char *s, char c);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int myStrcmp(const char *a, const char *b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

char *myStrcat(char *dest, const char *src)
{
    /* เขียนโค้ดที่นี่ */
    return NULL;
}

char *findChar(const char *s, char c)
{
    /* เขียนโค้ดที่นี่ */
    return NULL;
}
