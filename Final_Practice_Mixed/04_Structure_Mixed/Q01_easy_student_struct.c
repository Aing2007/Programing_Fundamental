/*
 * ================================================================
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : struct กับฟังก์ชันผ่าน pointer
 *  หัวข้อที่ใช้ : Structure + Pointer + Function
 * ================================================================
 *  [โจทย์]
 *    รับข้อมูลนักศึกษา 1 คน (รหัส ชื่อ คะแนน) ผ่านฟังก์ชันที่รับ pointer ของ struct
 *    พิมพ์ข้อมูลและเกรด (>=80 A, >=70 B, >=60 C, >=50 D, อื่น F)
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
 *    void readStudent(struct Student *s);
 *    void printStudent(const struct Student *s);
 *    char getGrade(double score);
 *
 *  [Input]
 *    รหัส ชื่อ คะแนน
 *
 *  [Output]
 *    ID, Name, Score (2 ตำแหน่ง), Grade
 *
 *  [Test case 1]
 *   Input:
 *      66010001 Somchai 78.5
 *   Output:
 *      ID: 66010001
 *      Name: Somchai
 *      Score: 78.50
 *      Grade: B
 *
 *  [Test case 2]
 *   Input:
 *      66010002 Mali 49
 *   Output:
 *      ID: 66010002
 *      Name: Mali
 *      Score: 49.00
 *      Grade: F
 *
 *  [คำใบ้]
 *    ใน readStudent: scanf("%s %s %lf", s->id, s->name, &s->score)
 *
 * ================================================================
 */
#include <stdio.h>

struct Student {
    char   id[12];
    char   name[30];
    double score;
};

void readStudent(struct Student *s);
void printStudent(const struct Student *s);
char getGrade(double score);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void readStudent(struct Student *s)
{
    /* เขียนโค้ดที่นี่ */
}

void printStudent(const struct Student *s)
{
    /* เขียนโค้ดที่นี่ */
}

char getGrade(double score)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
