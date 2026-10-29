/*
 * ================================================================
 *  ข้อที่    : 6    |    ระดับ : ยาก
 *  ชื่อโจทย์ : รวมอาร์เรย์ที่เรียงแล้วและลบค่าซ้ำ
 *  หัวข้อที่ใช้ : Array + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับอาร์เรย์ A (n ตัว) และ B (m ตัว) ที่เรียงจากน้อยไปมากแล้ว (n, m <= 100)
 *    รวมเป็นอาร์เรย์เดียวที่ยังเรียงอยู่ (วิธี merge ห้าม sort ใหม่)
 *    แล้วลบค่าซ้ำออกจากอาร์เรย์ที่รวมแล้ว (ทำในที่เดิม) คืนจำนวนสมาชิกใหม่
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void mergeSorted(const int *a, int n, const int *b, int m, int *out);
 *    int removeDuplicates(int *a, int n);
 *    void printArray(const int *a, int n);
 *
 *  [Input]
 *    บรรทัด 1: n   บรรทัด 2: A n ตัว
 *    บรรทัด 3: m   บรรทัด 4: B m ตัว
 *
 *  [Output]
 *    Merged: ...
 *    Unique: ...  (จำนวน)
 *
 *  [Test case 1]
 *   Input:
 *      3
 *      1 3 5
 *      4
 *      2 3 6 8
 *   Output:
 *      Merged: 1 2 3 3 5 6 8
 *      Unique: 1 2 3 5 6 8 (6)
 *
 *  [Test case 2]
 *   Input:
 *      2
 *      1 1
 *      2
 *      1 1
 *   Output:
 *      Merged: 1 1 1 1
 *      Unique: 1 (1)
 *
 *  [คำใบ้]
 *    merge ใช้ดัชนี i, j วิ่งบน A และ B พร้อมกัน แล้วเก็บเศษที่เหลือ
 *
 * ================================================================
 */
#include <stdio.h>

void mergeSorted(const int *a, int n, const int *b, int m, int *out);
int removeDuplicates(int *a, int n);
void printArray(const int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void mergeSorted(const int *a, int n, const int *b, int m, int *out)
{
    /* เขียนโค้ดที่นี่ */
}

int removeDuplicates(int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void printArray(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}
