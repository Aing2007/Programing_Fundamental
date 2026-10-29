/*
 * ==============================================================
 *  หัวข้อ    : Structure
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : อาร์เรย์ของ struct
 * ==============================================================
 *  [โจทย์]
 *    รับข้อมูลนักศึกษา n คน (ชื่อ คะแนน) เก็บในอาร์เรย์ของ struct
 *    หาผู้ที่ได้คะแนนสูงสุด (ถ้าเท่ากันเลือกคนที่มาก่อน) และคะแนนเฉลี่ย
 *
 *  [Input]
 *    บรรทัดแรก: n (1 <= n <= 50)
 *    n บรรทัดถัดไป: ชื่อ คะแนน
 *
 *  [Output]
 *    Top: ชื่อ (คะแนน)  และ Average  (ทศนิยม 2 ตำแหน่ง)
 *
 *  [Test case 1]
 *   Input:
 *      3
 *      Anan 70
 *      Bua 92
 *      Chai 81
 *   Output:
 *      Top: Bua (92.00)
 *      Average = 81.00
 *
 *  [Test case 2]
 *   Input:
 *      2
 *      A 50
 *      B 50
 *   Output:
 *      Top: A (50.00)
 *      Average = 50.00
 *
 * ==============================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    struct data
    {
        char name;
        int potin;
    };
    int n;
    printf("input number :");
    scanf("%d", &n);
    struct data *s = malloc(n * sizeof(struct data));
    int Max, sum = 0, who;
    for (int i = 0; i < n; i++)
    {
        printf("\ninput [%d] Data : ", i + 1);
        scanf(" %c %d", &s[i].name, &s[i].potin);
        if (Max < s[i].potin)
        {
            Max = s[i].potin;
            who = i;
        }
        if (i == 0)
        {
            Max = s[0].potin;
            who = 0;
        }
        sum += s[i].potin;
    }
    printf("Max = %c : %d\n", s[who].name, s[who].potin);
    printf("avg : %.2f", (float)sum / n);
    return 0;
}
