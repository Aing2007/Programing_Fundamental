/*
 * ================================================================
 *  ข้อที่    : 4    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : ระบบยืม-คืนหนังสือ
 *  หัวข้อที่ใช้ : Array of structure + Pointer + Function + Condition
 * ================================================================
 *  [โจทย์]
 *    รับหนังสือ n เล่ม (n <= 50) และคำสั่ง m รายการ: B id (ยืม) / R id (คืน)
 *    ฟังก์ชัน borrowBook/returnBook คืนรหัสสถานะ: 0 สำเร็จ, 1 ไม่พบหนังสือ, 2 สถานะไม่ถูกต้อง
 *    (ยืมเล่มที่ถูกยืมอยู่ หรือคืนเล่มที่ว่างอยู่) แล้ว main แปลงรหัสเป็นข้อความ
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Book {
 *        int  id;
 *        char title[40];
 *        int  available;   // 1 = ว่าง, 0 = ถูกยืม
 *    };
 *    int findBook(const struct Book *b, int n, int id);
 *    int borrowBook(struct Book *b, int n, int id);
 *    int returnBook(struct Book *b, int n, int id);
 *    void printBooks(const struct Book *b, int n);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: id ชื่อเรื่อง(ไม่มีช่องว่าง)
 *    บรรทัดถัดไป: m
 *    m บรรทัด: คำสั่ง
 *
 *  [Output]
 *    ต่อคำสั่ง: Borrowed ชื่อ / Returned ชื่อ / Book not found / Already borrowed / Not borrowed
 *    สุดท้าย: id ชื่อ Available/Borrowed ทุกเล่ม
 *
 *  [Test case 1]
 *   Input:
 *      2
 *      1 CProgramming
 *      2 Algorithms
 *      4
 *      B 1
 *      B 1
 *      R 1
 *      B 3
 *   Output:
 *      Borrowed CProgramming
 *      Already borrowed
 *      Returned CProgramming
 *      Book not found
 *      1 CProgramming Available
 *      2 Algorithms Available
 *
 *  [Test case 2]
 *   Input:
 *      1
 *      5 Networks
 *      2
 *      R 5
 *      B 5
 *   Output:
 *      Not borrowed
 *      Borrowed Networks
 *      5 Networks Borrowed
 *
 *  [คำใบ้]
 *    borrowBook และ returnBook ต้องเรียก findBook ; หนังสือเริ่มต้นทุกเล่มว่าง
 *
 * ================================================================
 */
#include <stdio.h>

struct Book {
    int  id;
    char title[40];
    int  available;   // 1 = ว่าง, 0 = ถูกยืม
};

int findBook(const struct Book *b, int n, int id);
int borrowBook(struct Book *b, int n, int id);
int returnBook(struct Book *b, int n, int id);
void printBooks(const struct Book *b, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int findBook(const struct Book *b, int n, int id)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int borrowBook(struct Book *b, int n, int id)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int returnBook(struct Book *b, int n, int id)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void printBooks(const struct Book *b, int n)
{
    /* เขียนโค้ดที่นี่ */
}
