/*
 * ================================================================
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : กลับอาร์เรย์และตรวจการเรียงลำดับ
 *  หัวข้อที่ใช้ : Array + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว (n <= 100)
 *    ตรวจว่าเรียงจากน้อยไปมากหรือไม่ กลับลำดับในอาร์เรย์เดิม แล้วตรวจอีกครั้ง
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int isSorted(const int *a, int n);
 *    void reverseArray(int *a, int n);
 *    void printArray(const int *a, int n);
 *
 *  [Input]
 *    บรรทัดแรก: n
 *    บรรทัดที่สอง: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Sorted: Yes/No
 *    Reversed: สมาชิกหลังกลับ
 *    Sorted: Yes/No (ตรวจอีกครั้งหลังกลับ)
 *
 *  [Test case 1]
 *   Input:
 *      5
 *      1 2 3 4 5
 *   Output:
 *      Sorted: Yes
 *      Reversed: 5 4 3 2 1
 *      Sorted: No
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      3 1 2
 *   Output:
 *      Sorted: No
 *      Reversed: 2 1 3
 *      Sorted: No
 *
 *  [Test case 3]
 *   Input:
 *      1
 *      7
 *   Output:
 *      Sorted: Yes
 *      Reversed: 7
 *      Sorted: Yes
 *
 *  [คำใบ้]
 *    reverseArray ใช้ดัชนีหัว-ท้ายสลับค่า ; ห้ามใช้อาร์เรย์สำรอง
 *
 * ================================================================
 */
#include <stdio.h>

int isSorted(const int *a, int n);
void reverseArray(int *a, int n);
void printArray(const int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int isSorted(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void reverseArray(int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}

void printArray(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}
