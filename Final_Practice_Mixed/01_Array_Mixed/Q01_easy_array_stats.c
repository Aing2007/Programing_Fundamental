/*
 * ================================================================
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : สถิติของอาร์เรย์ผ่านฟังก์ชัน
 *  หัวข้อที่ใช้ : Array + Function + Pointer (output parameter)
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว (n <= 100) เก็บลงอาร์เรย์
 *    หาผลรวม ค่าเฉลี่ย ค่าน้อยสุด และค่ามากสุด โดย min/max ต้องส่งกลับผ่าน pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int sumArray(const int a[], int n);
 *    double avgArray(const int a[], int n);
 *    void minMax(const int a[], int n, int *min, int *max);
 *
 *  [Input]
 *    บรรทัดแรก: n
 *    บรรทัดที่สอง: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Sum, Average (ทศนิยม 2 ตำแหน่ง), Min, Max
 *
 *  [Test case 1]
 *   Input:
 *      5
 *      3 8 1 9 4
 *   Output:
 *      Sum = 25
 *      Average = 5.00
 *      Min = 1
 *      Max = 9
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      -5 -2 -9
 *   Output:
 *      Sum = -16
 *      Average = -5.33
 *      Min = -9
 *      Max = -2
 *
 *  [คำใบ้]
 *    avgArray ควรเรียกใช้ sumArray ; ค่าเริ่มต้นของ *min/*max คือ a[0]
 *
 * ================================================================
 */
#include <stdio.h>

int sumArray(const int a[], int n);
double avgArray(const int a[], int n);
void minMax(const int a[], int n, int *min, int *max);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int sumArray(const int a[], int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

double avgArray(const int a[], int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void minMax(const int a[], int n, int *min, int *max)
{
    /* เขียนโค้ดที่นี่ */
}
