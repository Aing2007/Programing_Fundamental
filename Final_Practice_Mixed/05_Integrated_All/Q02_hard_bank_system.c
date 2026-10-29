/*
 * ================================================================
 *  ข้อที่    : 2    |    ระดับ : ยาก
 *  ชื่อโจทย์ : ระบบบัญชีธนาคาร
 *  หัวข้อที่ใช้ : Array of structure + Pointer + Function + Loop/Condition
 * ================================================================
 *  [โจทย์]
 *    รับบัญชี n บัญชี (n <= 20) แล้วรับรายการธุรกรรม m รายการ
 *      D no amt      ฝาก
 *      W no amt      ถอน (ถ้าเงินไม่พอ พิมพ์ Insufficient balance)
 *      T from to amt โอน (ใช้ withdraw + deposit)
 *    ถ้าเลขบัญชีไม่มีพิมพ์ Account not found  สุดท้ายพิมพ์ยอดคงเหลือทุกบัญชี
 *
 *  [ข้อกำหนด (บังคับ)]
 *    1) ห้ามใช้ global variable ทุกกรณี (ตัวแปรต้องอยู่ใน main หรือในฟังก์ชัน)
 *    2) ต้องใช้ function prototype ตามที่กำหนดด้านล่าง "ทุกฟังก์ชัน" ห้ามแก้ชื่อ ชนิด หรือลำดับพารามิเตอร์
 *    3) main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด และห้ามเขียนตรรกะของฟังก์ชันไว้ใน main แทน
 *    4) ขนาดอาร์เรย์สูงสุดตามที่โจทย์ระบุ ห้ามใช้ Variable Length Array
 *       (ไม่ทำตามข้อกำหนด = ไม่ตรวจข้อนั้น)
 *
 *  [Prototype ที่ต้องใช้]
 *    struct Account {
 *        int    no;
 *        char   name[30];
 *        double balance;
 *    };
 *    int findAccount(const struct Account *acc, int n, int no);
 *    void deposit(struct Account *a, double amt);
 *    int withdraw(struct Account *a, double amt);
 *    int transfer(struct Account *from, struct Account *to, double amt);
 *
 *  [Input]
 *    บรรทัด 1: n
 *    n บรรทัด: no name balance
 *    บรรทัดถัดไป: m
 *    m บรรทัด: ธุรกรรม
 *
 *  [Output]
 *    ผลแต่ละธุรกรรม: Deposit OK / Withdraw OK / Transfer OK / Insufficient balance / Account not found
 *    แล้วตามด้วย no name balance (2 ตำแหน่ง) ทุกบัญชี
 *
 *  [Test case 1]
 *   Input:
 *      2
 *      101 Ann 1000
 *      102 Bob 500
 *      4
 *      D 101 200
 *      W 102 800
 *      T 101 102 300
 *      W 999 1
 *   Output:
 *      Deposit OK
 *      Insufficient balance
 *      Transfer OK
 *      Account not found
 *      101 Ann 900.00
 *      102 Bob 800.00
 *
 *  [คำใบ้]
 *    withdraw คืน 1 เมื่อสำเร็จ 0 เมื่อเงินไม่พอ ; transfer เรียก withdraw ก่อน ถ้าสำเร็จค่อย deposit
 *    อ่านคำสั่งด้วย scanf(" %c", &op)
 *
 * ================================================================
 */
#include <stdio.h>

struct Account {
    int    no;
    char   name[30];
    double balance;
};

int findAccount(const struct Account *acc, int n, int no);
void deposit(struct Account *a, double amt);
int withdraw(struct Account *a, double amt);
int transfer(struct Account *from, struct Account *to, double amt);

int main(void)
{
    /* เขียนคำตอบของคุณที่นี่ (ห้ามประกาศตัวแปรนอก main) */

    return 0;
}

int findAccount(const struct Account *acc, int n, int no)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

void deposit(struct Account *a, double amt)
{
    /* เขียนโค้ดที่นี่ */
}

int withdraw(struct Account *a, double amt)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}

int transfer(struct Account *from, struct Account *to, double amt)
{
    /* เขียนโค้ดที่นี่ */
    return 0;
}
