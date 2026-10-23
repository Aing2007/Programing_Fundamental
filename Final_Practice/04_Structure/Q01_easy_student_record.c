/*
 * ==============================================================
 *  หัวข้อ    : Structure
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : ประกาศและใช้งาน struct
 * ==============================================================
 *  [โจทย์]
 *    ประกาศ struct Student ที่มีสมาชิก
 *      รหัสนักศึกษา (สตริง), ชื่อ (สตริง), คะแนน (double)
 *    รับข้อมูลนักศึกษา 1 คน แล้วพิมพ์ออกมา
 *
 *  [Input]
 *    รหัส ชื่อ คะแนน (คั่นด้วยช่องว่าง ชื่อไม่มีช่องว่าง)
 *
 *  [Output]
 *    3 บรรทัด: ID, Name, Score (ทศนิยม 2 ตำแหน่ง)
 *
 *  [Test case 1]
 *   Input:
 *      66010001 Somchai 78.5
 *   Output:
 *      ID: 66010001
 *      Name: Somchai
 *      Score: 78.50
 *
 *  [ข้อกำหนด / คำใบ้]
 *    อย่าลืม ; หลังปีกกาปิดของ struct
 *    อ่าน double ด้วย %lf ; สมาชิกที่เป็นสตริงไม่ต้องใส่ & ใน scanf
 *
 * ==============================================================
 */
#include <stdio.h>

int main(void)
{
    struct Data
    {
        char name[50];
        int ID;
        int score;
    } Student;
    gets(Student.name);
    scanf("%d", &Student.ID);
    scanf("%d", &Student.score);
    printf("Output :\n");
    printf("%s\n", Student.name);
    printf("%d\n", Student.ID);
    printf("%d\n", Student.score);
    return 0;
}
