/*
 * ================================================================
 *  ข้อที่    : 7    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : แยกกลุ่มและเลื่อนอาร์เรย์
 *  หัวข้อที่ใช้ : Pointer + Array + Function
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว (n <= 100) และ k
 *    1) แยกเป็นกลุ่มบวก / ลบ / ศูนย์ ลงอาร์เรย์แยก โดยจำนวนสมาชิกแต่ละกลุ่มส่งกลับทาง pointer
 *    2) เลื่อนอาร์เรย์ต้นฉบับไปทางขวา k ตำแหน่งแบบวน (k อาจเกิน n)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void splitArray(const int *a, int n, int *pos, int *np, int *neg, int *nn, int *nz);
 *    void shiftRight(int *a, int n, int k);
 *    void printArray(const int *a, int n);
 *
 *  [Input]
 *    บรรทัด 1: n k   บรรทัด 2: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    Positive: ... (จำนวน), Negative: ... (จำนวน), Zero = จำนวน, Shifted: ...
 *
 *  [Test case 1]
 *   Input:
 *      6 1
 *      3 -1 0 -5 7 2
 *   Output:
 *      Positive: 3 7 2 (3)
 *      Negative: -1 -5 (2)
 *      Zero = 1
 *      Shifted: 2 3 -1 0 -5 7
 *
 *  [Test case 2]
 *   Input:
 *      4 6
 *      1 2 3 4
 *   Output:
 *      Positive: 1 2 3 4 (4)
 *      Negative:  (0)
 *      Zero = 0
 *      Shifted: 3 4 1 2
 *
 *  [คำใบ้]
 *    k %= n ก่อน ; shiftRight ทำได้โดยกลับทั้งอาร์เรย์ แล้วกลับช่วง [0,k) และ [k,n) แยกกัน
 *
 * ================================================================
 */
#include <stdio.h>

void splitArray(const int *a, int n, int *pos, int *np, int *neg, int *nn, int *nz);
void shiftRight(int *a, int n, int k);
void printArray(const int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void splitArray(const int *a, int n, int *pos, int *np, int *neg, int *nn, int *nz)
{
    /* เขียนโค้ดที่นี่ */
}

void shiftRight(int *a, int n, int k)
{
    /* เขียนโค้ดที่นี่ */
}

void printArray(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}
