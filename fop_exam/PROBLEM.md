# โจทย์เตรียมสอบ Programming Fundamentals (ภาษา C)
## หัวข้อ: ระบบจัดการผลการเรียนจากไฟล์ Binary

**ความรู้ที่ใช้:** Binary File I/O · struct · array · pointer · function · loop · dynamic memory
**เวลาแนะนำ:** 60–90 นาที

---

## 1. เรื่องราว
ระบบทะเบียนเก็บข้อมูลนักเรียนไว้ในไฟล์ `data/students.dat` (binary)
ให้เขียนโปรแกรมอ่านข้อมูลทั้งหมดมาเก็บในหน่วยความจำ คำนวณเกรด จัดอันดับ และบันทึกนักเรียน 3 อันดับแรกลงไฟล์ binary ใหม่

## 2. รูปแบบไฟล์ `students.dat`
ไฟล์ประกอบด้วย **Header 1 ตัว** ตามด้วย **Student record ต่อเนื่องกัน `count` ตัว**

```c
typedef struct {
    char     magic[4];   /* ต้องเป็น "STD1" (ไม่มี \0 ต่อท้าย) */
    uint32_t count;      /* จำนวนนักเรียนในไฟล์ */
} Header;                /* ขนาด 8 ไบต์ */

typedef struct {
    int32_t id;          /* รหัสนักเรียน */
    char    name[32];    /* ชื่อ (null-terminated, เติม \0 ให้ครบ 32 ไบต์) */
    float   scores[3];   /* คะแนน 3 วิชา */
} Student;               /* ขนาด 48 ไบต์ */
```

> ไฟล์สร้างบนระบบ little-endian (เครื่องทั่วไป x86/ARM ใช้ได้เลย)
> struct ข้างต้นไม่มี padding จึง `fread` ทีเดียวได้ แต่ **ต้องอ่านด้วย `sizeof`** ห้ามใส่เลขขนาดเอง

## 3. สิ่งที่ต้องทำ
เปิดไฟล์ `exam.c` แล้วเติมฟังก์ชันที่มี `TODO` ให้ครบ **ห้ามแก้ `main`, `printStudent` และ struct**

| # | ฟังก์ชัน | หน้าที่ | ความรู้ที่ฝึก |
|---|---------|---------|--------------|
| 1 | `float calcAverage(const Student *s)` | หาค่าเฉลี่ย 3 วิชา | loop, pointer ->, array |
| 2 | `char getGrade(float avg)` | แปลงค่าเฉลี่ยเป็นเกรด | function, if |
| 3 | `Student *loadStudents(const char *fn, uint32_t *outCount)` | อ่าน header + records ลง array ที่ malloc | file, malloc, error handling |
| 4 | `const Student *findBest(const Student *arr, int n)` | คืน pointer ของคนเฉลี่ยสูงสุด | pointer arithmetic |
| 5 | `void countGrades(const Student *arr, int n, int counts[5])` | นับจำนวน A,B,C,D,F | array, loop |
| 6 | `void sortByAverage(Student *arr, int n)` | เรียงเฉลี่ยมาก→น้อย | pointer, struct copy/swap |
| 7 | `int saveTopN(const char *fn, const Student *arr, int n, int topN)` | เขียนไฟล์ `top3.dat` | fwrite |

### เกณฑ์เกรด
| ค่าเฉลี่ย | เกรด |
|-----------|------|
| >= 80 | A |
| >= 70 | B |
| >= 60 | C |
| >= 50 | D |
| < 50 | F |

### รายละเอียดฟังก์ชันสำคัญ
**`loadStudents`**
- เปิดไฟล์โหมด `"rb"` ไม่ได้ → คืน `NULL`
- อ่าน `Header` แล้วตรวจ `magic` ด้วย `memcmp(h.magic, "STD1", 4)` ไม่ตรง → คืน `NULL`
- `malloc` พื้นที่ `count * sizeof(Student)` แล้ว `fread` ให้ครบ ถ้าอ่านได้ไม่ครบ → `free` แล้วคืน `NULL`
- ทุกเส้นทางต้อง `fclose` ไฟล์

**`findBest`, `sortByAverage`** — ให้ฝึกใช้ pointer เช่น `for (const Student *p = arr; p < arr + n; p++)` แทนการใช้ `arr[i]`

**`saveTopN`** — รูปแบบไฟล์ผลลัพธ์ `top3.dat`
```
[uint32_t topN][Student][Student][Student]   (4 + 3*48 = 148 ไบต์)
```
เรียกหลังจาก sort แล้ว จึงเป็น 3 คนที่เฉลี่ยสูงสุด

## 4. วิธีคอมไพล์และทดสอบ
```bash
make exam          # หรือ gcc -Wall -Wextra exam.c -o exam
./exam             # รันจากโฟลเดอร์นี้ (path data/students.dat เป็น relative)
make verify        # สร้างตัวอ่าน top3.dat
./verify           # ตรวจไฟล์ผลลัพธ์
```
ผลลัพธ์ที่ถูกต้องดูได้ใน `expected_output.txt` และ `expected_top3.txt`
ตรวจเทียบอัตโนมัติ: `./exam | diff - expected_output.txt && echo PASS`

## 5. เกณฑ์ตรวจ (รวม 100 คะแนน)
| ข้อ | คะแนน |
|-----|-------|
| calcAverage + getGrade | 10 |
| loadStudents (อ่านไฟล์ถูก, ตรวจ magic, ไม่ leak) | 25 |
| findBest | 10 |
| countGrades | 10 |
| sortByAverage | 15 |
| saveTopN (ไฟล์ถูกต้อง) | 20 |
| ใช้ pointer ตามโจทย์ / โค้ดอ่านง่าย / free memory | 10 |

## 6. โจทย์เสริม (ถ้าทำเสร็จก่อน)
1. เปลี่ยน `saveTopN` ให้รับ `topN` จากผู้ใช้ผ่าน `scanf` ใน `main`
2. เขียนโปรแกรมเพิ่มอีกไฟล์เพื่อ **เพิ่ม** นักเรียนใหม่ต่อท้าย `students.dat` (ต้องแก้ `count` ใน header ด้วย: ใช้ `fseek` + `fwrite`)
3. ทดสอบกรณีผิดพลาด: ไฟล์ไม่มีอยู่ / magic ผิด / ไฟล์ถูกตัดให้สั้นลง โปรแกรมต้องไม่ crash
4. ใช้ `valgrind ./exam` ตรวจว่าไม่มี memory leak

## 7. โครงสร้างโฟลเดอร์
```
exam.c                 <- ไฟล์ที่ต้องแก้
PROBLEM.md             <- โจทย์นี้
Makefile
data/students.dat      <- ไฟล์ข้อมูล binary
expected_output.txt    <- ผลลัพธ์ที่ถูกต้อง
expected_top3.txt      <- เนื้อหา top3.dat ที่ถูกต้อง
tools/gen_data.py      <- สคริปต์สร้างข้อมูล (แก้ข้อมูลเพื่อลองเคสอื่นได้)
tools/verify_top3.c    <- ตัวอ่านไฟล์ top3.dat
solution/solution.c    <- เฉลย (อย่าเพิ่งเปิด!)
```
