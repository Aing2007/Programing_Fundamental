/*
 * ==============================================================
 *  หัวข้อ    : Array
 *  ข้อที่    : 4    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : เรียงลำดับและหามัธยฐาน
 * ==============================================================
 *  [โจทย์]
 *    รับจำนวนเต็ม n ตัว เรียงจากน้อยไปมากด้วยวิธีที่เขียนเอง
 *    (เช่น Bubble sort หรือ Selection sort) แล้วหาค่ามัธยฐาน
 *    - n เป็นคี่: ตัวตรงกลาง
 *    - n เป็นคู่: ค่าเฉลี่ยของ 2 ตัวตรงกลาง
 *
 *  [Input]
 *    บรรทัดแรก: n (1 <= n <= 100)
 *    บรรทัดที่สอง: จำนวนเต็ม n ตัว
 *
 *  [Output]
 *    บรรทัดแรก: "Sorted: " ตามด้วยข้อมูลที่เรียงแล้ว
 *    บรรทัดที่สอง: "Median = " ทศนิยม 1 ตำแหน่ง
 *
 *  [Test case 1]
 *   Input:
 *      5
 *      9 2 7 4 1
 *   Output:
 *      Sorted: 1 2 4 7 9
 *      Median = 4.0
 *
 *  [Test case 2]
 *   Input:
 *      4
 *      8 3 6 1
 *   Output:
 *      Sorted: 1 3 6 8
 *      Median = 4.5
 *
 *  [ข้อกำหนด / คำใบ้]
 *    ลองเขียน loop ซ้อน 2 ชั้นของ bubble sort ให้ได้โดยไม่เปิดดูตัวอย่าง
 *
 * ==============================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, *numPtr;
    printf("Input :");
    scanf("%d", &n);
    numPtr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &numPtr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (numPtr[j] > numPtr[j + 1])
            {
                int temp = numPtr[j + 1];
                numPtr[j + 1] = numPtr[j];
                numPtr[j] = temp;
            }
        }
    }
    float Mean = 0.00;
    int positionL = 0, positionR = 0;
    if (n % 2 == 0)
    {
        positionL = n / 2;
        positionR = (n / 2) + 1;
        Mean = (float)(numPtr[positionL - 1] + numPtr[positionR - 1]) / 2;
    }
    else if (n % 2 != 0)
    {
        Mean = numPtr[((n - 1) / 2)];
    }

    printf("Output:\n");
    printf("Sorted: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numPtr[i]);
    }
    printf("\nMean: %.2f", Mean);
    return 0;
}