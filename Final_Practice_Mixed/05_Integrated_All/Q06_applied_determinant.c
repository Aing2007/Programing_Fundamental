/*
 * ================================================================
 *  ข้อที่    : 6    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : ดีเทอร์มิแนนต์แบบ recursive
 *  หัวข้อที่ใช้ : Array 2 มิติ + Recursion + Function
 * ================================================================
 *  [โจทย์]
 *    รับเมทริกซ์จัตุรัส n x n (n <= 5) หาดีเทอร์มิแนนต์โดยกระจายตามแถวแรก (cofactor expansion)
 *    ต้องเขียนฟังก์ชันสร้าง minor (ตัดแถว 0 และคอลัมน์ col ออก) แยกต่างหาก
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *    5) det ต้องเป็น recursive
 *
 *  [Prototype ที่ต้องใช้]
 *    void readMatrix(int m[][5], int n);
 *    void minor(const int src[][5], int dst[][5], int n, int col);
 *    int det(const int m[][5], int n);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: บรรทัดละ n จำนวนเต็ม
 *
 *  [Output]
 *    Det = ค่า
 *
 *  [Test case 1]
 *   Input:
 *      2
 *      1 2
 *      3 4
 *   Output:
 *      Det = -2
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      2 0 1
 *      1 3 2
 *      1 1 1
 *   Output:
 *      Det = 0
 *
 *  [Test case 3]
 *   Input:
 *      1
 *      9
 *   Output:
 *      Det = 9
 *
 *  [คำใบ้]
 *    base case n == 1 ; det = sum( (-1)^j * m[0][j] * det(minor_j) ) ; ใช้ sign สลับ +1/-1 แทนการยกกำลัง
 *
 * ================================================================
 */
#include <stdio.h>

void readMatrix(int m[][5], int n);
void minor(const int src[][5], int dst[][5], int n, int col);
int det(const int m[][5], int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void readMatrix(int m[][5], int n)
{
    /* เขียนโค้ดที่นี่ */
}

void minor(const int src[][5], int dst[][5], int n, int col)
{
    /* เขียนโค้ดที่นี่ */
}

int det(const int m[][5], int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
