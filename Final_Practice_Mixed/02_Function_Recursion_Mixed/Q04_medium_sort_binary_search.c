/*
 * ================================================================
 *  ข้อที่    : 4    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : เรียงลำดับแล้วค้นหาแบบทวิภาค
 *  หัวข้อที่ใช้ : Array + Function + Recursion + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว (n <= 100) และค่าที่ต้องการหา key
 *    เรียงลำดับด้วย bubble sort แล้วค้นหา key ด้วย binary search แบบ recursive
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *    5) binarySearch ต้องเป็น recursive
 *
 *  [Prototype ที่ต้องใช้]
 *    void bubbleSort(int *a, int n);
 *    int binarySearch(const int *a, int lo, int hi, int key);
 *    void printArray(const int *a, int n);
 *
 *  [Input]
 *    บรรทัด 1: n   บรรทัด 2: จำนวนเต็ม n ตัว   บรรทัด 3: key
 *
 *  [Output]
 *    Sorted: ...  แล้ว Found at index k (ดัชนีในอาร์เรย์ที่เรียงแล้ว เริ่ม 0) หรือ Not found
 *
 *  [Test case 1]
 *   Input:
 *      6
 *      9 2 7 4 1 8
 *      7
 *   Output:
 *      Sorted: 1 2 4 7 8 9
 *      Found at index 3
 *
 *  [Test case 2]
 *   Input:
 *      6
 *      9 2 7 4 1 8
 *      5
 *   Output:
 *      Sorted: 1 2 4 7 8 9
 *      Not found
 *
 *  [คำใบ้]
 *    binarySearch คืน -1 เมื่อ lo > hi ; เรียกครั้งแรกด้วย lo = 0, hi = n - 1
 *
 * ================================================================
 */
#include <stdio.h>

void bubbleSort(int *a, int n);
int binarySearch(const int *a, int lo, int hi, int key);
void printArray(const int *a, int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void bubbleSort(int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}

int binarySearch(const int *a, int lo, int hi, int key)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void printArray(const int *a, int n)
{
    /* เขียนโค้ดที่นี่ */
}
