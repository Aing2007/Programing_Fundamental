#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct {
    int   id;
    char  name[20];
    float midterm;   /* เต็ม 40 */
    float final;     /* เต็ม 60 */
} Student;

/* ================= TODO: เขียนฟังก์ชันต่อไปนี้ให้ครบ ================= */

/* 1) เปิดไฟล์ binary ด้วย "rb" แล้วอ่านทีละ record ลง list[] ด้วย fread ใน loop
      จนหมดไฟล์ (หรือครบ max) คืนจำนวนที่อ่านได้
      ถ้าเปิดไฟล์ไม่ได้ให้คืน -1  (อย่าลืม fclose) */
int readStudents(const char *filename, Student list[], int max) {
    /* TODO */
    return -1;
}

/* 2) คืนคะแนนรวม = midterm + final */
float calcTotal(Student s) {
    /* TODO */
    return 0;
}

/* 3) คืน index ของนักเรียนที่คะแนนรวมสูงสุด */
int findTopIndex(Student list[], int n) {
    /* TODO */
    return 0;
}

/* 4) หาค่าเฉลี่ยของคะแนนรวมทุกคน และจำนวนคนที่สอบผ่าน (คะแนนรวม >= 50)
      ส่งค่ากลับผ่าน pointer: *avg และ *passCount */
void calcStats(Student list[], int n, float *avg, int *passCount) {
    /* TODO */
}

/* ================= main ให้มาแล้ว ไม่ต้องแก้ ================= */
int main(void) {
    Student list[MAX_STUDENTS];
    int n, i, top, passCount;
    float avg;

    n = readStudents("data/students.dat", list, MAX_STUDENTS);
    if (n < 0) {
        printf("Error: cannot open file\n");
        return 1;
    }

    printf("Read %d students\n\n", n);
    printf("%-6s %-12s %8s %8s %8s\n", "ID", "Name", "Midterm", "Final", "Total");
    for (i = 0; i < n; i++) {
        printf("%-6d %-12s %8.1f %8.1f %8.1f\n",
               list[i].id, list[i].name, list[i].midterm, list[i].final,
               calcTotal(list[i]));
    }

    top = findTopIndex(list, n);
    printf("\nTop student: %s (%.1f)\n", list[top].name, calcTotal(list[top]));

    calcStats(list, n, &avg, &passCount);
    printf("Average total: %.2f\n", avg);
    printf("Passed: %d / %d\n", passCount, n);

    return 0;
}
