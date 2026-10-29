/*
 * ================================================================
 *  ข้อที่    : 4    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : ทรานสโพสและเมทริกซ์สมมาตร
 *  หัวข้อที่ใช้ : Array 2 มิติ + Function
 * ================================================================
 *  [โจทย์]
 *    รับเมทริกซ์ r x c (ไม่เกิน 10x10) หาเมทริกซ์ทรานสโพส
 *    ถ้าเป็นเมทริกซ์จัตุรัส ให้ตรวจด้วยว่าสมมาตร (A == A^T) หรือไม่
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void readMatrix(int m[][10], int r, int c);
 *    void transpose(const int src[][10], int dst[][10], int r, int c);
 *    void printMatrix(const int m[][10], int r, int c);
 *    int isSymmetric(const int m[][10], int n);
 *
 *  [Input]
 *    บรรทัดแรก: r c
 *    r บรรทัดถัดไป: บรรทัดละ c จำนวนเต็ม
 *
 *  [Output]
 *    Transpose: ตามด้วยเมทริกซ์ c x r
 *    ถ้า r == c พิมพ์ Symmetric: Yes/No เพิ่ม
 *
 *  [Test case 1]
 *   Input:
 *      2 3
 *      1 2 3
 *      4 5 6
 *   Output:
 *      Transpose:
 *      1 4
 *      2 5
 *      3 6
 *
 *  [Test case 2]
 *   Input:
 *      2 2
 *      1 2
 *      2 1
 *   Output:
 *      Transpose:
 *      1 2
 *      2 1
 *      Symmetric: Yes
 *
 *  [Test case 3]
 *   Input:
 *      2 2
 *      1 2
 *      3 4
 *   Output:
 *      Transpose:
 *      1 3
 *      2 4
 *      Symmetric: No
 *
 *  [คำใบ้]
 *    พารามิเตอร์อาร์เรย์ 2 มิติต้องระบุขนาดมิติที่สอง int m[][10]
 *
 * ================================================================
 */
#include <stdio.h>

void readMatrix(int m[][10], int r, int c);
void transpose(const int src[][10], int dst[][10], int r, int c);
void printMatrix(const int m[][10], int r, int c);
int isSymmetric(const int m[][10], int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void readMatrix(int m[][10], int r, int c)
{
    /* เขียนโค้ดที่นี่ */
}

void transpose(const int src[][10], int dst[][10], int r, int c)
{
    /* เขียนโค้ดที่นี่ */
}

void printMatrix(const int m[][10], int r, int c)
{
    /* เขียนโค้ดที่นี่ */
}

int isSymmetric(const int m[][10], int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
