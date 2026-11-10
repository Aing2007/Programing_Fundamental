#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct {
    int   id;
    char  name[20];
    float midterm;   /* เต็ม 40 */
    float final;     /* เต็ม 60 */
} Student;

/* อ่านข้อมูลจากไฟล์ binary ลง array คืนจำนวนที่อ่านได้ (เปิดไฟล์ไม่ได้คืน -1) */
int readStudents(const char *filename, Student list[], int max) {
    FILE *fp = fopen(filename, "rb");
    int n = 0;

    if (fp == NULL) {
        return -1;
    }
    while (n < max && fread(&list[n], sizeof(Student), 1, fp) == 1) {
        n++;
    }
    fclose(fp);
    return n;
}

/* คะแนนรวม = midterm + final */
float calcTotal(Student s) {
    return s.midterm + s.final;
}

/* คืน index ของนักเรียนที่คะแนนรวมสูงสุด */
int findTopIndex(Student list[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (calcTotal(list[i]) > calcTotal(list[top])) {
            top = i;
        }
    }
    return top;
}

/* หาค่าเฉลี่ยของคะแนนรวม และจำนวนคนที่สอบผ่าน (รวม >= 50) ส่งค่ากลับทาง pointer */
void calcStats(Student list[], int n, float *avg, int *passCount) {
    int i;
    float sum = 0;

    *passCount = 0;
    for (i = 0; i < n; i++) {
        float t = calcTotal(list[i]);
        sum += t;
        if (t >= 50) {
            (*passCount)++;
        }
    }
    *avg = sum / n;
}

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
