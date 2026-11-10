# โจทย์เตรียมสอบ Programming Fundamentals (ภาษา C)
## หัวข้อ: อ่านข้อมูลนักเรียนจากไฟล์ Binary

**ความรู้ที่ใช้:** struct · array · pointer (ส่งค่ากลับผ่าน parameter) · function · loop · อ่าน binary file (`fopen` / `fread` / `fclose`)
**เวลาแนะนำ:** 45–60 นาที

---

## 1. สถานการณ์
ไฟล์ `data/students.dat` เป็นไฟล์ binary ที่เก็บคะแนนนักเรียนหลายคน
ให้เขียนโปรแกรมอ่านข้อมูลทั้งหมดเข้า array แล้วหาคะแนนรวม คนที่ได้คะแนนสูงสุด ค่าเฉลี่ย และจำนวนคนที่สอบผ่าน

## 2. รูปแบบไฟล์
ไฟล์ไม่มี header เป็น `struct Student` ต่อกันไปเรื่อย ๆ จนหมดไฟล์ (ไม่ทราบจำนวนล่วงหน้า)

```c
#define MAX_STUDENTS 100

typedef struct {
    int   id;          /* รหัสนักเรียน */
    char  name[20];    /* ชื่อ */
    float midterm;     /* คะแนนกลางภาค เต็ม 40 */
    float final;       /* คะแนนปลายภาค เต็ม 60 */
} Student;             /* 1 record = 32 ไบต์ */
```

> ให้ใช้ `sizeof(Student)` ในการอ่านเสมอ ห้ามพิมพ์เลขขนาดเอง

## 3. สิ่งที่ต้องทำ
เปิด `exam.c` แล้วเติมฟังก์ชันที่มี `TODO` ให้ครบ 4 ฟังก์ชัน ห้ามแก้ `main` และ struct

| # | ฟังก์ชัน | หน้าที่ |
|---|---------|---------|
| 1 | `int readStudents(const char *filename, Student list[], int max)` | เปิดไฟล์ `"rb"` อ่านด้วย `fread` ใน loop ลง `list` คืนจำนวนที่อ่านได้ ถ้าเปิดไฟล์ไม่ได้คืน `-1` |
| 2 | `float calcTotal(Student s)` | คืนคะแนนรวม = `midterm + final` |
| 3 | `int findTopIndex(Student list[], int n)` | คืน index ของคนที่คะแนนรวมสูงสุด |
| 4 | `void calcStats(Student list[], int n, float *avg, int *passCount)` | หาค่าเฉลี่ยคะแนนรวม และนับคนที่รวม >= 50 ส่งค่ากลับทาง pointer |

### คำใบ้
- `fread(&list[n], sizeof(Student), 1, fp)` จะคืน `1` เมื่ออ่านสำเร็จ และคืน `0` เมื่อหมดไฟล์ ใช้เป็นเงื่อนไขของ `while` ได้
- ใน `calcStats` ต้องเขียนผ่าน `*avg` และ `*passCount`
- อย่าลืมเช็คไม่ให้อ่านเกิน `max`

## 4. วิธีคอมไพล์และทดสอบ
```bash
gcc -Wall exam.c -o exam
./exam                  # รันจากโฟลเดอร์นี้ (path data/students.dat เป็น relative)
./exam | diff - expected_output.txt && echo PASS
```
หรือใช้ `make` (ดู Makefile) ผลลัพธ์ที่ถูกต้องอยู่ใน `expected_output.txt`

## 5. เกณฑ์ตรวจ (100 คะแนน)
| ข้อ | คะแนน |
|-----|-------|
| `readStudents` (เปิดไฟล์, loop อ่าน, fclose, คืนค่าถูก) | 40 |
| `calcTotal` | 10 |
| `findTopIndex` | 20 |
| `calcStats` (ใช้ pointer ถูกต้อง) | 30 |

## 6. โจทย์เสริม (ถ้าทำเสร็จก่อน)
1. เขียนฟังก์ชัน `int savePassed(const char *filename, Student list[], int n)` ใช้ `fopen` โหมด `"wb"` และ `fwrite` บันทึกเฉพาะคนที่สอบผ่านลง `passed.dat` คืนจำนวนที่เขียน
2. เขียนโปรแกรมแยกอีกตัวที่อ่าน `passed.dat` มาแสดงผล เพื่อตรวจว่าเขียนไฟล์ถูก
3. ทดสอบกรณีไฟล์ไม่มีอยู่ว่าโปรแกรมแสดง error แล้วจบ ไม่ crash

## 7. ไฟล์ในโฟลเดอร์
```
exam.c               <- ไฟล์ที่ต้องแก้
PROBLEM.md           <- โจทย์นี้
Makefile
data/students.dat    <- ไฟล์ข้อมูล binary
expected_output.txt  <- ผลลัพธ์ที่ถูกต้อง
tools/gen_data.py    <- สคริปต์สร้างข้อมูล (แก้ตัวเลขเพื่อลองเคสอื่นได้)
solution/solution.c  <- เฉลย (อย่าเพิ่งเปิด!)
```
