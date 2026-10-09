/*
 * ==============================================================
 *  หัวข้อ    : Array
 *  ข้อที่    : 3    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : นับความถี่ของคะแนน
 * ==============================================================
 *  [โจทย์]
 *    คะแนนสอบย่อยมีค่า 0 ถึง 10 รับคะแนนของนักศึกษา n คน
 *    แล้วนับว่าแต่ละคะแนนมีกี่คน โดยใช้อาร์เรย์ขนาด 11 ช่องเป็นตัวนับ
 *
 *  [Input]
 *    บรรทัดแรก: n (1 <= n <= 1000)
 *    บรรทัดที่สอง: คะแนน n ค่า (0..10)
 *
 *  [Output]
 *    พิมพ์เฉพาะคะแนนที่มีคนได้ เรียงจากคะแนนน้อยไปมาก
 *    รูปแบบ "คะแนน: จำนวนคน" บรรทัดละ 1 คะแนน
 *
 *  [Test case 1]
 *   Input:
 *      8
 *      5 3 5 10 3 5 0 7
 *   Output:
 *      0: 1
 *      3: 2
 *      5: 3
 *      7: 1
 *      10: 1
 *
 *  [Test case 2]
 *   Input:
 *      3
 *      9 9 9
 *   Output:
 *      9: 3
 *
 *  [ข้อกำหนด / คำใบ้]
 *    ประกาศ int count[11] = {0}; แล้วใช้คะแนนเป็นดัชนี count[score]++
 *
 * ==============================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, *numPtr;
    printf("Input:\n");
    scanf("%d", &n);
    numPtr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &numPtr[i]);
    }
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (numPtr[i] > numPtr[i + 1])
            {
                int temp = numPtr[i + 1];
                numPtr[i + 1] = numPtr[i];
                numPtr[i] = temp;
            }
        }
    }
    int count = 1, Number = numPtr[0];
    for (int i = 1; i <= n; i++)
    {
        if (numPtr[i] == Number)
            count++;
        else if (numPtr[i] != Number)
        {
            printf("%d : %d\n", Number, count);
            count = 1;
            Number = numPtr[i];
        }
    }

    return 0;
}
