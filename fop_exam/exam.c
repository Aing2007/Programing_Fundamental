#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define NAME_LEN 32
#define NUM_SCORES 3

typedef struct { char magic[4]; uint32_t count; } Header;
typedef struct { int32_t id; char name[NAME_LEN]; float scores[NUM_SCORES]; } Student;

/* ================= TODO: เขียนฟังก์ชันต่อไปนี้ให้ครบ ================= */

/* 1) คืนค่าเฉลี่ยของคะแนน 3 วิชา (ใช้ loop) */
float calcAverage(const Student *s) {
    /* TODO */
    return 0.0f;
}

/* 2) คืนเกรดจากค่าเฉลี่ย: >=80 A, >=70 B, >=60 C, >=50 D, นอกนั้น F */
char getGrade(float avg) {
    /* TODO */
    return 'F';
}

/* 3) เปิดไฟล์ binary, ตรวจ magic, malloc array, fread ทั้งหมด
      สำเร็จ: คืนพอยน์เตอร์ array และเก็บจำนวนใน *outCount
      ล้มเหลว: คืน NULL (อย่าลืม fclose / free ในทุกเส้นทาง) */
Student *loadStudents(const char *filename, uint32_t *outCount) {
    /* TODO */
    return NULL;
}

/* 4) คืนพอยน์เตอร์ของนักเรียนที่ค่าเฉลี่ยสูงสุด (ห้ามใช้ arr[i] ให้ใช้ pointer arithmetic) */
const Student *findBest(const Student *arr, int n) {
    /* TODO */
    return NULL;
}

/* 5) นับจำนวนนักเรียนในแต่ละเกรด เก็บใน counts[0..4] = A,B,C,D,F */
void countGrades(const Student *arr, int n, int counts[5]) {
    /* TODO */
}

/* 6) เรียงจากค่าเฉลี่ยมาก -> น้อย (in-place) ใช้ pointer ในการวน/สลับ */
void sortByAverage(Student *arr, int n) {
    /* TODO */
}

/* 7) เขียนไฟล์ binary: uint32_t จำนวน topN แล้วตามด้วย Student topN ตัวแรกของ arr
      สำเร็จคืน 1, เปิดไฟล์ไม่ได้คืน 0 (ถ้า topN > n ให้ใช้ n) */
int saveTopN(const char *filename, const Student *arr, int n, int topN) {
    /* TODO */
    return 0;
}

/* ================= ส่วนด้านล่างนี้ให้มาแล้ว ไม่ต้องแก้ ================= */
void printStudent(const Student *s) {
    float avg = calcAverage(s);
    printf("%-6d %-18s %6.1f %6.1f %6.1f %7.2f   %c\n",
           s->id, s->name, s->scores[0], s->scores[1], s->scores[2], avg, getGrade(avg));
}

int main(void) {
    uint32_t n;
    Student *list = loadStudents("data/students.dat", &n);
    if (!list) { printf("Error: cannot load students.dat\n"); return 1; }

    printf("=== Student List (%u) ===\n", n);
    printf("%-6s %-18s %6s %6s %6s %7s   %s\n", "ID", "Name", "S1", "S2", "S3", "Avg", "Grade");
    for (uint32_t i = 0; i < n; i++) printStudent(list + i);

    const Student *best = findBest(list, n);
    printf("\nBest student: %s (%.2f)\n", best->name, calcAverage(best));

    int counts[5];
    countGrades(list, n, counts);
    printf("\n=== Grade Summary ===\n");
    const char *g = "ABCDF";
    for (int i = 0; i < 5; i++) printf("%c : %d\n", g[i], counts[i]);

    sortByAverage(list, n);
    printf("\n=== Ranking ===\n");
    for (uint32_t i = 0; i < n; i++) {
        printf("%2u. ", i + 1);
        printStudent(list + i);
    }

    if (saveTopN("top3.dat", list, n, 3)) printf("\nSaved top 3 to top3.dat\n");
    free(list);
    return 0;
}
