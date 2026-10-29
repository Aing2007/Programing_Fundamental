/*
 * ================================================================
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : struct ซ้อน struct: สี่เหลี่ยม
 *  หัวข้อที่ใช้ : Nested structure + Pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับมุม 2 มุมของสี่เหลี่ยม (x1 y1 x2 y2 โดย x1<x2, y1<y2) และจุดทดสอบ 1 จุด
 *    หาพื้นที่ เส้นรอบรูป และตรวจว่าจุดอยู่ในสี่เหลี่ยม (รวมขอบ) หรือไม่
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Point {
 *        double x, y;
 *    };
 *
 *    struct Rect {
 *        struct Point tl;   // มุมซ้ายล่าง (x น้อย, y น้อย)
 *        struct Point br;   // มุมขวาบน (x มาก, y มาก)
 *    };
 *    double area(const struct Rect *r);
 *    double perimeter(const struct Rect *r);
 *    int contains(const struct Rect *r, struct Point p);
 *
 *  [Input]
 *    บรรทัด 1: x1 y1 x2 y2
 *    บรรทัด 2: px py
 *
 *  [Output]
 *    Area, Perimeter (2 ตำแหน่ง), Contains: Yes/No
 *
 *  [Test case 1]
 *   Input:
 *      0 0 4 3
 *      2 1
 *   Output:
 *      Area = 12.00
 *      Perimeter = 14.00
 *      Contains: Yes
 *
 *  [Test case 2]
 *   Input:
 *      0 0 4 3
 *      4 5
 *   Output:
 *      Area = 12.00
 *      Perimeter = 14.00
 *      Contains: No
 *
 *  [คำใบ้]
 *    เข้าถึงด้วย r->br.x - r->tl.x
 *
 * ================================================================
 */
#include <stdio.h>

struct Point {
    double x, y;
};

struct Rect {
    struct Point tl;   // มุมซ้ายล่าง (x น้อย, y น้อย)
    struct Point br;   // มุมขวาบน (x มาก, y มาก)
};

double area(const struct Rect *r);
double perimeter(const struct Rect *r);
int contains(const struct Rect *r, struct Point p);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

double area(const struct Rect *r)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

double perimeter(const struct Rect *r)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int contains(const struct Rect *r, struct Point p)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
