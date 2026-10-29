/*
 * ================================================================
 *  ข้อที่    : 5    |    ระดับ : ประยุกต์
 *  ชื่อโจทย์ : ตรวจผลกระดาน Tic-Tac-Toe
 *  หัวข้อที่ใช้ : Char array 2 มิติ + Function + Condition
 * ================================================================
 *  [โจทย์]
 *    รับกระดาน 3x3 จำนวน 3 บรรทัด (ตัวอักษร X, O หรือ - แทนช่องว่าง)
 *    ตรวจว่ามีผู้ชนะหรือไม่ (แถว คอลัมน์ แนวทแยง) กระดานเต็มหรือไม่ และนับหมากแต่ละฝ่ายผ่าน pointer
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    void readBoard(char b[][3]);
 *    char checkWinner(const char b[][3]);
 *    int isFull(const char b[][3]);
 *    void countMarks(const char b[][3], int *x, int *o);
 *
 *  [Input]
 *    3 บรรทัด บรรทัดละ 3 ตัวอักษรติดกัน
 *
 *  [Output]
 *    X = จำนวน, O = จำนวน แล้ว Winner: X / Winner: O / Draw / Not finished
 *
 *  [Test case 1]
 *   Input:
 *      XOX
 *      OXO
 *      OOX
 *   Output:
 *      X = 4, O = 5
 *      Winner: X
 *
 *  [Test case 2]
 *   Input:
 *      XOX
 *      XOO
 *      OXX
 *   Output:
 *      X = 5, O = 4
 *      Draw
 *
 *  [Test case 3]
 *   Input:
 *      XO-
 *      -X-
 *      ---
 *   Output:
 *      X = 2, O = 1
 *      Not finished
 *
 *  [คำใบ้]
 *    checkWinner คืน 'X', 'O' หรือ '-' ; อ่านทีละบรรทัดด้วย scanf("%s", row) ลง char ชั่วคราวแล้วคัดลอก หรือ scanf(" %c") ทีละช่อง
 *
 * ================================================================
 */
#include <stdio.h>

void readBoard(char b[][3]);
char checkWinner(const char b[][3]);
int isFull(const char b[][3]);
void countMarks(const char b[][3], int *x, int *o);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

void readBoard(char b[][3])
{
    /* เขียนโค้ดที่นี่ */
}

char checkWinner(const char b[][3])
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int isFull(const char b[][3])
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void countMarks(const char b[][3], int *x, int *o)
{
    /* เขียนโค้ดที่นี่ */
}
