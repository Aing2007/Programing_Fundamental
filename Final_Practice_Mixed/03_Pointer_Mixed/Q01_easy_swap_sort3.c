/*
 * ================================================================
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : สลับค่าและเรียง 3 จำนวน
 *  หัวข้อที่ใช้ : Pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม 3 ตัว เรียงจากน้อยไปมากโดยสลับค่าในตัวแปรของ main โดยตรง
 *    และหาค่าน้อยสุด/มากสุดส่งกลับทาง pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void swap(int *x, int *y);
 *    void sortThree(int *a, int *b, int *c);
 *    void minMax3(int a, int b, int c, int *mn, int *mx);
 *
 *  [Input]
 *    a b c
 *
 *  [Output]
 *    Sorted: a b c  และ Min, Max
 *
 *  [Test case 1]
 *   Input:
 *      9 3 6
 *   Output:
 *      Sorted: 3 6 9
 *      Min = 3
 *      Max = 9
 *
 *  [Test case 2]
 *   Input:
 *      1 1 0
 *   Output:
 *      Sorted: 0 1 1
 *      Min = 0
 *      Max = 1
 *
 *  [คำใบ้]
 *    sortThree ต้องเรียก swap ; เปรียบเทียบ 3 คู่ก็พอ
 *
 * ================================================================
 */
#include <stdio.h>

void swap(int *x, int *y);
void sortThree(int *a, int *b, int *c);
void minMax3(int a, int b, int c, int *mn, int *mx);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void swap(int *x, int *y)
{
    /* เขียนโค้ดที่นี่ */
}

void sortThree(int *a, int *b, int *c)
{
    /* เขียนโค้ดที่นี่ */
}

void minMax3(int a, int b, int c, int *mn, int *mx)
{
    /* เขียนโค้ดที่นี่ */
}
