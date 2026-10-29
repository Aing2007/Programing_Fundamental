/*
 * ================================================================
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : ฟังก์ชันคืนค่าเป็น struct
 *  หัวข้อที่ใช้ : Structure + Function
 * ================================================================
 *  [โจทย์]
 *    รับจุด 2 จุด หาระยะห่างและจุดกึ่งกลาง (midpoint ต้องคืนค่าเป็น struct Point)
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
 *    struct Point readPoint(void);
 *    double distance(struct Point a, struct Point b);
 *    struct Point midpoint(struct Point a, struct Point b);
 *
 *  [Input]
 *    x1 y1 x2 y2
 *
 *  [Output]
 *    Distance (2 ตำแหน่ง) และ Midpoint = (x, y)
 *
 *  [Test case 1]
 *   Input:
 *      0 0 4 2
 *   Output:
 *      Distance = 4.47
 *      Midpoint = (2.00, 1.00)
 *
 *  [Test case 2]
 *   Input:
 *      1 1 1 1
 *   Output:
 *      Distance = 0.00
 *      Midpoint = (1.00, 1.00)
 *
 *  [คำใบ้]
 *    #include <math.h> ใช้ sqrt ; compile ด้วย -lm บน Linux
 *
 * ================================================================
 */
#include <stdio.h>
#include <math.h>

struct Point {
    double x, y;
};

struct Point readPoint(void);
double distance(struct Point a, struct Point b);
struct Point midpoint(struct Point a, struct Point b);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

struct Point readPoint(void)
{
    /* เขียนโค้ดที่นี่ */
    struct Point r = {0};
    return r;
}

double distance(struct Point a, struct Point b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

struct Point midpoint(struct Point a, struct Point b)
{
    /* เขียนโค้ดที่นี่ */
    struct Point r = {0};
    return r;
}
