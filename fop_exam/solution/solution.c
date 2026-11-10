#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define NAME_LEN 32
#define NUM_SCORES 3

typedef struct { char magic[4]; uint32_t count; } Header;
typedef struct { int32_t id; char name[NAME_LEN]; float scores[NUM_SCORES]; } Student;

float calcAverage(const Student *s) {
    float sum = 0;
    for (int i = 0; i < NUM_SCORES; i++) sum += s->scores[i];
    return sum / NUM_SCORES;
}

char getGrade(float avg) {
    if (avg >= 80) return 'A';
    if (avg >= 70) return 'B';
    if (avg >= 60) return 'C';
    if (avg >= 50) return 'D';
    return 'F';
}

Student *loadStudents(const char *filename, uint32_t *outCount) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return NULL;
    Header h;
    if (fread(&h, sizeof(Header), 1, fp) != 1 || memcmp(h.magic, "STD1", 4) != 0) {
        fclose(fp);
        return NULL;
    }
    Student *arr = malloc(h.count * sizeof(Student));
    if (!arr) { fclose(fp); return NULL; }
    if (fread(arr, sizeof(Student), h.count, fp) != h.count) {
        free(arr); fclose(fp); return NULL;
    }
    fclose(fp);
    *outCount = h.count;
    return arr;
}

const Student *findBest(const Student *arr, int n) {
    const Student *best = arr;
    for (const Student *p = arr + 1; p < arr + n; p++)
        if (calcAverage(p) > calcAverage(best)) best = p;
    return best;
}

void countGrades(const Student *arr, int n, int counts[5]) {
    const char *g = "ABCDF";
    for (int i = 0; i < 5; i++) counts[i] = 0;
    for (int i = 0; i < n; i++) {
        char c = getGrade(calcAverage(arr + i));
        counts[strchr(g, c) - g]++;
    }
}

void sortByAverage(Student *arr, int n) {
    for (Student *i = arr; i < arr + n - 1; i++) {
        Student *max = i;
        for (Student *j = i + 1; j < arr + n; j++)
            if (calcAverage(j) > calcAverage(max)) max = j;
        if (max != i) { Student t = *i; *i = *max; *max = t; }
    }
}

int saveTopN(const char *filename, const Student *arr, int n, int topN) {
    if (topN > n) topN = n;
    FILE *fp = fopen(filename, "wb");
    if (!fp) return 0;
    uint32_t c = (uint32_t)topN;
    fwrite(&c, sizeof(c), 1, fp);
    fwrite(arr, sizeof(Student), topN, fp);
    fclose(fp);
    return 1;
}

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
