/*
 * ================================================================
 *  ข้อที่    : 3    |    ระดับ : ยาก
 *  ชื่อโจทย์ : เวกเตอร์ 3 มิติ
 *  หัวข้อที่ใช้ : Structure + Function + Pointer + math.h
 * ================================================================
 *  [โจทย์]
 *    รับเวกเตอร์ a และ b หา dot product, cross product, ขนาดของ a
 *    และทำให้ a เป็นเวกเตอร์หนึ่งหน่วยในที่เดิม (ผ่าน pointer)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Vec3 {
 *        double x, y, z;
 *    };
 *    double dot(struct Vec3 a, struct Vec3 b);
 *    struct Vec3 cross(struct Vec3 a, struct Vec3 b);
 *    double magnitude(const struct Vec3 *v);
 *    void normalize(struct Vec3 *v);
 *
 *  [Input]
 *    2 บรรทัด: x y z
 *
 *  [Output]
 *    Dot, Cross = (x, y, z), |a| (2 ตำแหน่ง), Unit a = (x, y, z) (2 ตำแหน่ง)
 *
 *  [Test case 1]
 *   Input:
 *      1 0 0
 *      0 1 0
 *   Output:
 *      Dot = 0.00
 *      Cross = (0.00, 0.00, 1.00)
 *      |a| = 1.00
 *      Unit a = (1.00, 0.00, 0.00)
 *
 *  [Test case 2]
 *   Input:
 *      1 2 3
 *      4 5 6
 *   Output:
 *      Dot = 32.00
 *      Cross = (-3.00, 6.00, -3.00)
 *      |a| = 3.74
 *      Unit a = (0.27, 0.53, 0.80)
 *
 *  [คำใบ้]
 *    cross = (ay*bz - az*by, az*bx - ax*bz, ax*by - ay*bx) ; normalize ต้องเรียก magnitude
 *
 * ================================================================
 */
#include <stdio.h>
#include <math.h>

struct Vec3 {
    double x, y, z;
};

double dot(struct Vec3 a, struct Vec3 b);
struct Vec3 cross(struct Vec3 a, struct Vec3 b);
double magnitude(const struct Vec3 *v);
void normalize(struct Vec3 *v);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

double dot(struct Vec3 a, struct Vec3 b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

struct Vec3 cross(struct Vec3 a, struct Vec3 b)
{
    /* เขียนโค้ดที่นี่ */
    struct Vec3 r = {0};
    return r;
}

double magnitude(const struct Vec3 *v)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void normalize(struct Vec3 *v)
{
    /* เขียนโค้ดที่นี่ */
}
