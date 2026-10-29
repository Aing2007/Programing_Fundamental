/*
 * ================================================================
 *  ข้อที่    : 4    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : อาร์เรย์ของ struct: คลังสินค้า
 *  หัวข้อที่ใช้ : Array of structure + Pointer + Function + string.h
 * ================================================================
 *  [โจทย์]
 *    รับสินค้า n รายการ (n <= 50) แล้ว
 *    1) หามูลค่ารวม (qty * price ทุกรายการ)
 *    2) ค้นหาด้วยรหัสสินค้า (คืนดัชนี หรือ -1)
 *    3) พิมพ์สินค้าที่ qty < threshold
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Product {
 *        char   code[10];
 *        char   name[20];
 *        int    qty;
 *        double price;
 *    };
 *    double totalValue(const struct Product *p, int n);
 *    int findByCode(const struct Product *p, int n, const char *code);
 *    void lowStock(const struct Product *p, int n, int threshold);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: รหัส ชื่อ จำนวน ราคา
 *    บรรทัดถัดไป: รหัสที่ค้นหา
 *    บรรทัดสุดท้าย: threshold
 *
 *  [Output]
 *    Total value (2 ตำแหน่ง)
 *    Found: ชื่อ qty จำนวน  หรือ Not found
 *    Low stock: ชื่อสินค้าบรรทัดละรายการ (ถ้าไม่มีพิมพ์ -)
 *
 *  [Test case 1]
 *   Input:
 *      3
 *      P01 Pen 50 12.5
 *      P02 Book 3 120
 *      P03 Ink 10 45
 *      P02
 *      5
 *   Output:
 *      Total value = 1435.00
 *      Found: Book qty 3
 *      Low stock:
 *      Book
 *
 *  [Test case 2]
 *   Input:
 *      1
 *      P01 Pen 50 12.5
 *      P09
 *      5
 *   Output:
 *      Total value = 625.00
 *      Not found
 *      Low stock:
 *      -
 *
 *  [คำใบ้]
 *    ใช้ strcmp จาก <string.h> ได้ในข้อนี้
 *
 * ================================================================
 */
#include <stdio.h>
#include <string.h>

struct Product {
    char   code[10];
    char   name[20];
    int    qty;
    double price;
};

double totalValue(const struct Product *p, int n);
int findByCode(const struct Product *p, int n, const char *code);
void lowStock(const struct Product *p, int n, int threshold);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

double totalValue(const struct Product *p, int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int findByCode(const struct Product *p, int n, const char *code)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void lowStock(const struct Product *p, int n, int threshold)
{
    /* เขียนโค้ดที่นี่ */
}
