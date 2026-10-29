/*
 * ================================================================
 *  ข้อที่    : 7    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : ตารางคะแนน 2 มิติ
 *  หัวข้อที่ใช้ : Array 2 มิติ + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    นักศึกษา n คน (n <= 50) สอบ 3 วิชา เก็บในอาร์เรย์ s[50][3]
 *    หาค่าเฉลี่ยของแต่ละคน ค่าเฉลี่ยของแต่ละวิชา และคนที่ค่าเฉลี่ยสูงสุด (ถ้าเท่ากันเลือกคนแรก)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    double studentAvg(const int s[][3], int i);
 *    double subjectAvg(const int s[][3], int n, int j);
 *    int bestStudent(const int s[][3], int n);
 *
 *  [Input]
 *    บรรทัดแรก: n
 *    n บรรทัดถัดไป: คะแนน 3 วิชา
 *
 *  [Output]
 *    Student i: avg (2 ตำแหน่ง) ทีละคน, Subject j: avg ทีละวิชา, Best: Student k (ลำดับเริ่มที่ 1)
 *
 *  [Test case 1]
 *   Input:
 *      3
 *      80 70 90
 *      60 65 70
 *      95 85 90
 *   Output:
 *      Student 1: 80.00
 *      Student 2: 65.00
 *      Student 3: 90.00
 *      Subject 1: 78.33
 *      Subject 2: 73.33
 *      Subject 3: 83.33
 *      Best: Student 3
 *
 *  [คำใบ้]
 *    bestStudent ต้องเรียก studentAvg ภายใน ห้ามคำนวณซ้ำเอง
 *
 * ================================================================
 */
#include <stdio.h>

double studentAvg(const int s[][3], int i);
double subjectAvg(const int s[][3], int n, int j);
int bestStudent(const int s[][3], int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

double studentAvg(const int s[][3], int i)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

double subjectAvg(const int s[][3], int n, int j)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int bestStudent(const int s[][3], int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
