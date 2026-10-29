/*
 * ================================================================
 *  ข้อที่    : 6    |    ระดับ : ยาก
 *  ชื่อโจทย์ : หอคอยฮานอยพร้อมตัวนับผ่าน pointer
 *  หัวข้อที่ใช้ : Recursion + Pointer
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนจาน n (1 <= n <= 10) พิมพ์ขั้นตอนย้ายจานจากเสา A ไป C โดยใช้ B
 *    และนับจำนวนครั้งที่ย้ายผ่านตัวแปรใน main ที่ส่งเป็น pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void hanoi(int n, char from, char to, char via, int *moves);
 *
 *  [Input]
 *    n
 *
 *  [Output]
 *    บรรทัดละ 1 การย้าย: Move disk d from X to Y  แล้วปิดท้าย Total = จำนวนครั้ง
 *
 *  [Test case 1]
 *   Input:
 *      2
 *   Output:
 *      Move disk 1 from A to B
 *      Move disk 2 from A to C
 *      Move disk 1 from B to C
 *      Total = 3
 *
 *  [Test case 2]
 *   Input:
 *      3
 *   Output:
 *      Move disk 1 from A to C
 *      (รวม 7 บรรทัด)
 *      Total = 7
 *
 *  [คำใบ้]
 *    hanoi(n-1, from, via, to) -> ย้ายจาน n -> hanoi(n-1, via, to, from)
 *
 * ================================================================
 */
#include <stdio.h>

void hanoi(int n, char from, char to, char via, int *moves);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void hanoi(int n, char from, char to, char via, int *moves)
{
    /* เขียนโค้ดที่นี่ */
}
