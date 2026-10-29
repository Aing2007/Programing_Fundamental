/*
 * ================================================================
 *  ข้อที่    : 5    |    ระดับ : ยาก
 *  ชื่อโจทย์ : อาร์เรย์แบบจองหน่วยความจำ (เนื้อหาเสริม)
 *  หัวข้อที่ใช้ : malloc + Pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับ n แล้วจองอาร์เรย์ขนาด n ด้วย malloc รับข้อมูล
 *    สร้างอาร์เรย์ใหม่ที่มีเฉพาะเลขคู่ (จองด้วย malloc เช่นกัน) และคืนหน่วยความจำทั้งหมด
 *    (ข้ามได้ถ้าในห้องยังไม่เรียน malloc)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int *readArray(int n);
 *    int *filterEven(const int *a, int n, int *m);
 *    void printArray(const int *a, int n);
 *
 *  [Input]
 *    บรรทัด 1: n   บรรทัด 2: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Even: ... และ Count ; ถ้าไม่มีพิมพ์ No even number
 *
 *  [Test case 1]
 *   Input:
 *      6
 *      1 2 3 4 5 6
 *   Output:
 *      Even: 2 4 6
 *      Count = 3
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      1 3 5
 *   Output:
 *      No even number
 *
 *  [คำใบ้]
 *    ตรวจ NULL หลัง malloc ; free ทั้ง 2 ก้อนก่อนจบ
 *
 * ================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int *readArray(int n);
int *filterEven(const int *a, int n, int *m);
void printArray(const int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int *readArray(int n)
{
    /* เขียนโค้ดที่นี่ */
    return NULL;
}

int *filterEven(const int *a, int n, int *m)
{
    /* เขียนโค้ดที่นี่ */
    return NULL;
}

void printArray(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}
