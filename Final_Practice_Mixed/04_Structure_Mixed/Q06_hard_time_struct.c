/*
 * ================================================================
 *  ข้อที่    : 6    |    ระดับ : ยาก
 *  ชื่อโจทย์ : คำนวณเวลาด้วย struct
 *  หัวข้อที่ใช้ : Structure + Function + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับเวลา 2 ค่า หาผลบวก ผลต่าง (ค่าสัมบูรณ์) และเวลาใดมาทีหลัง
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Time {
 *        int h, m, s;
 *    };
 *    int toSeconds(struct Time t);
 *    struct Time fromSeconds(int sec);
 *    struct Time addTime(struct Time a, struct Time b);
 *    int compareTime(const struct Time *a, const struct Time *b);
 *
 *  [Input]
 *    2 บรรทัด: h m s
 *
 *  [Output]
 *    Sum = HH:MM:SS, Diff = HH:MM:SS, Later = 1/2 (หรือ Equal)
 *
 *  [Test case 1]
 *   Input:
 *      1 50 40
 *      2 20 30
 *   Output:
 *      Sum = 04:11:10
 *      Diff = 00:29:50
 *      Later = 2
 *
 *  [Test case 2]
 *   Input:
 *      0 0 59
 *      0 0 59
 *   Output:
 *      Sum = 00:01:58
 *      Diff = 00:00:00
 *      Equal
 *
 *  [คำใบ้]
 *    addTime และ Diff ควรทำผ่าน toSeconds/fromSeconds ; compareTime คืน ลบ/0/บวก ; พิมพ์ด้วย %02d
 *
 * ================================================================
 */
#include <stdio.h>

struct Time {
    int h, m, s;
};

int toSeconds(struct Time t);
struct Time fromSeconds(int sec);
struct Time addTime(struct Time a, struct Time b);
int compareTime(const struct Time *a, const struct Time *b);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int toSeconds(struct Time t)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

struct Time fromSeconds(int sec)
{
    /* เขียนโค้ดที่นี่ */
    struct Time r = {0};
    return r;
}

struct Time addTime(struct Time a, struct Time b)
{
    /* เขียนโค้ดที่นี่ */
    struct Time r = {0};
    return r;
}

int compareTime(const struct Time *a, const struct Time *b)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
