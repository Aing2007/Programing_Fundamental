/*
 * ================================================================
 *  ข้อที่    : 1    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : จำนวนเฉพาะและตัวประกอบ
 *  หัวข้อที่ใช้ : Function + Loop
 * ================================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n (2 <= n <= 100000) ตรวจว่าเป็นจำนวนเฉพาะหรือไม่
 *    หาจำนวนเฉพาะตัวถัดไปที่มากกว่า n และแยกตัวประกอบเฉพาะของ n
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    int isPrime(int n);
 *    int nextPrime(int n);
 *    void primeFactors(int n);
 *
 *  [Input]
 *    จำนวนเต็ม n
 *
 *  [Output]
 *    Prime: Yes/No, Next prime, Factors: ... (เรียงน้อยไปมาก มีซ้ำได้)
 *
 *  [Test case 1]
 *   Input:
 *      12
 *   Output:
 *      Prime: No
 *      Next prime = 13
 *      Factors: 2 2 3
 *
 *  [Test case 2]
 *   Input:
 *      13
 *   Output:
 *      Prime: Yes
 *      Next prime = 17
 *      Factors: 13
 *
 *  [คำใบ้]
 *    nextPrime ต้องเรียก isPrime ; primeFactors ใช้ loop หารด้วย d ตั้งแต่ 2 ขึ้นไปจน n เหลือ 1
 *
 * ================================================================
 */
#include <stdio.h>

int isPrime(int n);
int nextPrime(int n);
void primeFactors(int n);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int isPrime(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int nextPrime(int n)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void primeFactors(int n)
{
    /* เขียนโค้ดที่นี่ */
}
