// อ่าน top3.dat เพื่อตรวจคำตอบ
// คอมไพล์: gcc tools/verify_top3.c -o verify   รัน: ./verify
#include <stdio.h>
#include <stdint.h>
typedef struct { int32_t id; char name[32]; float scores[3]; } Student;
int main(void) {
    FILE *fp = fopen("top3.dat", "rb");
    if (!fp) { printf("top3.dat not found\n"); return 1; }
    uint32_t c; fread(&c, sizeof c, 1, fp);
    printf("count = %u\n", c);
    Student s;
    while (fread(&s, sizeof s, 1, fp) == 1)
        printf("%d %s %.1f %.1f %.1f\n", s.id, s.name, s.scores[0], s.scores[1], s.scores[2]);
    fclose(fp);
    return 0;
}
