/*
 * ================================================================
 *  ข้อที่    : 5    |    ระดับ : ยาก
 *  ชื่อโจทย์ : เรียงลำดับอาร์เรย์ของ struct
 *  หัวข้อที่ใช้ : Array of structure + Pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับนักศึกษา n คน (ชื่อ คะแนนจำนวนเต็ม, n <= 50)
 *    เรียงตามคะแนนมากไปน้อย ถ้าเท่ากันเรียงชื่อ A-Z แล้วหาค่าเฉลี่ยและจำนวนคนที่ได้ > ค่าเฉลี่ย
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Student {
 *        char   id[12];
 *        char   name[30];
 *        double score;
 *    };
 *    void swapStudent(struct Student *a, struct Student *b);
 *    void sortStudents(struct Student *s, int n);
 *    double classAvg(const struct Student *s, int n);
 *    int countAbove(const struct Student *s, int n, double avg);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: ชื่อ คะแนน (ไม่ต้องใส่รหัส)
 *
 *  [Output]
 *    ลำดับ. ชื่อ คะแนน ตามด้วย Average และ Above
 *
 *  [Test case 1]
 *   Input:
 *      4
 *      Dao 80
 *      Ake 95
 *      Ben 80
 *      Fah 60
 *   Output:
 *      1. Ake 95
 *      2. Ben 80
 *      3. Dao 80
 *      4. Fah 60
 *      Average = 78.75
 *      Above = 3
 *
 *  [คำใบ้]
 *    sortStudents ต้องเรียก swapStudent ; เงื่อนไขสลับ: score น้อยกว่า หรือ (เท่ากัน และ strcmp(name) > 0)
 *
 * ================================================================
 */
#include <stdio.h>
#include <string.h>

struct Student {
    char   id[12];
    char   name[30];
    double score;
};

void swapStudent(struct Student *a, struct Student *b);
void sortStudents(struct Student *s, int n);
double classAvg(const struct Student *s, int n);
int countAbove(const struct Student *s, int n, double avg);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void swapStudent(struct Student *a, struct Student *b)
{
    /* เขียนโค้ดที่นี่ */
}

void sortStudents(struct Student *s, int n)
{
    /* เขียนโค้ดที่นี่ */
}

double classAvg(const struct Student *s, int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int countAbove(const struct Student *s, int n, double avg)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
