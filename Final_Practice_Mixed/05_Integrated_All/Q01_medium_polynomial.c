/*
 * ================================================================
 *  ข้อที่    : 1    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : พหุนาม
 *  หัวข้อที่ใช้ : Structure + Array + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับพหุนาม P และ Q (ดีกรี แล้วตามด้วยสัมประสิทธิ์ c0 c1 ... cdeg) และค่า x
 *    หา P(x), P+Q และอนุพันธ์ P'
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Poly {
 *        int deg;        // ดีกรีสูงสุด (<= 10)
 *        int coef[11];   // coef[i] = สัมประสิทธิ์ของ x^i
 *    };
 *    struct Poly readPoly(void);
 *    double evaluate(const struct Poly *p, double x);
 *    struct Poly addPoly(const struct Poly *a, const struct Poly *b);
 *    struct Poly derivative(const struct Poly *p);
 *    void printPoly(const struct Poly *p);
 *
 *  [Input]
 *    บรรทัด 1: deg ของ P   บรรทัด 2: สัมประสิทธิ์
 *    บรรทัด 3: deg ของ Q   บรรทัด 4: สัมประสิทธิ์
 *    บรรทัด 5: x
 *
 *  [Output]
 *    P(x) = ค่า (2 ตำแหน่ง)
 *    P+Q = สัมประสิทธิ์จาก c0 ไป cdeg
 *    P' = สัมประสิทธิ์
 *
 *  [Test case 1]
 *   Input:
 *      2
 *      1 2 3
 *      1
 *      4 5
 *      2
 *   Output:
 *      P(2) = 17.00
 *      P+Q = 5 7 3
 *      P' = 2 6
 *
 *  [Test case 2]
 *   Input:
 *      0
 *      7
 *      0
 *      1
 *      100
 *   Output:
 *      P(100) = 7.00
 *      P+Q = 8
 *      P' = 0
 *
 *  [คำใบ้]
 *    อนุพันธ์ของพหุนามดีกรี 0 คือ 0 (deg = 0, coef[0] = 0)
 *
 * ================================================================
 */
#include <stdio.h>

struct Poly {
    int deg;        // ดีกรีสูงสุด (<= 10)
    int coef[11];   // coef[i] = สัมประสิทธิ์ของ x^i
};

struct Poly readPoly(void);
double evaluate(const struct Poly *p, double x);
struct Poly addPoly(const struct Poly *a, const struct Poly *b);
struct Poly derivative(const struct Poly *p);
void printPoly(const struct Poly *p);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

struct Poly readPoly(void)
{
    /* เขียนโค้ดที่นี่ */
    struct Poly r = {0};
    return r;
}

double evaluate(const struct Poly *p, double x)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

struct Poly addPoly(const struct Poly *a, const struct Poly *b)
{
    /* เขียนโค้ดที่นี่ */
    struct Poly r = {0};
    return r;
}

struct Poly derivative(const struct Poly *p)
{
    /* เขียนโค้ดที่นี่ */
    struct Poly r = {0};
    return r;
}

void printPoly(const struct Poly *p)
{
    /* เขียนโค้ดที่นี่ */
}
