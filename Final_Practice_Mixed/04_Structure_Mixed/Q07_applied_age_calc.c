/*
 * ================================================================
 *  ข้อที่    : 7    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : คำนวณอายุจากวันเกิด
 *  หัวข้อที่ใช้ : Nested structure + Array of structure + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับคน n คน (ชื่อ วัน เดือน ปี ค.ศ., n <= 50) และวันที่วันนี้
 *    หาอายุเต็มปีของแต่ละคน และคนที่อายุมากสุด (เกิดก่อนสุด)
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Date {
 *        int d, m, y;
 *    };
 *
 *    struct Person {
 *        char        name[30];
 *        struct Date birth;
 *    };
 *    int compareDate(const struct Date *a, const struct Date *b);
 *    int ageOn(struct Date birth, struct Date today);
 *    int oldest(const struct Person *p, int n);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: ชื่อ d m y
 *    บรรทัดสุดท้าย: d m y ของวันนี้
 *
 *  [Output]
 *    ชื่อ: อายุ บรรทัดละคน แล้ว Oldest: ชื่อ (DD/MM/YYYY)
 *
 *  [Test case 1]
 *   Input:
 *      3
 *      Nida 15 3 2004
 *      Pong 2 11 2000
 *      Mai 20 1 2004
 *      22 10 2026
 *   Output:
 *      Nida: 22
 *      Pong: 25
 *      Mai: 22
 *      Oldest: Pong (02/11/2000)
 *
 *  [คำใบ้]
 *    อายุ = today.y - birth.y แล้วลบ 1 ถ้ายังไม่ถึงวันเกิดปีนี้ (ใช้ compareDate ช่วย)
 *    oldest ต้องเรียก compareDate
 *
 * ================================================================
 */
#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Person {
    char        name[30];
    struct Date birth;
};

int compareDate(const struct Date *a, const struct Date *b);
int ageOn(struct Date birth, struct Date today);
int oldest(const struct Person *p, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int compareDate(const struct Date *a, const struct Date *b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int ageOn(struct Date birth, struct Date today)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int oldest(const struct Person *p, int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
