/*
 * ================================================================
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : ห้ามใช้ [ ] ทั้งโปรแกรม
 *  หัวข้อที่ใช้ : Pointer arithmetic + Function
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว (n <= 100) หาผลรวมของช่วง [begin, end) และหาตำแหน่งค่ามากสุด
 *    โดยคืนเป็น pointer แล้วให้ main คำนวณดัชนีจากการลบ pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *    5) ห้ามใช้เครื่องหมาย [ ] ทั้งโปรแกรม ยกเว้นบรรทัดประกาศอาร์เรย์ใน main
 *
 *  [Prototype ที่ต้องใช้]
 *    int sumRange(const int *begin, const int *end);
 *    int *findMax(int *a, int n);
 *
 *  [Input]
 *    บรรทัด 1: n   บรรทัด 2: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Sum, Max = ค่า at index ดัชนี
 *
 *  [Test case 1]
 *   Input:
 *      5
 *      3 8 1 9 4
 *   Output:
 *      Sum = 25
 *      Max = 9 at index 3
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      5 5 5
 *   Output:
 *      Sum = 15
 *      Max = 5 at index 0
 *
 *  [คำใบ้]
 *    scanf("%d", p + i) ; index = pMax - a ; sumRange วน while (begin < end)
 *
 * ================================================================
 */
#include <stdio.h>

int sumRange(const int *begin, const int *end);
int *findMax(int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int sumRange(const int *begin, const int *end)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int *findMax(int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
    return NULL;
}
