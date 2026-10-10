/*
 * ==============================================================
 *  หัวข้อ    : Array
 *  ข้อที่    : 5    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : ผลรวมแถวและคอลัมน์ของเมทริกซ์
 * ==============================================================
 *  [โจทย์]
 *    รับเมทริกซ์ขนาด r x c เก็บในอาร์เรย์ 2 มิติ
 *    แล้วหาผลรวมของแต่ละแถวและแต่ละคอลัมน์
 *
 *  [Input]
 *    บรรทัดแรก: r c (1 <= r, c <= 10)
 *    r บรรทัดถัดไป: บรรทัดละ c จำนวนเต็ม
 *
 *  [Output]
 *    ผลรวมแต่ละแถว ตามด้วยผลรวมแต่ละคอลัมน์ (เลขลำดับเริ่มที่ 1)
 *
 *  [Test case 1]
 *   Input:
 *      2 3
 *      1 2 3
 *      4 5 6
 *   Output:
 *      Row 1 = 6
 *      Row 2 = 15
 *      Col 1 = 5
 *      Col 2 = 7
 *      Col 3 = 9
 *
 *  [Test case 2]
 *   Input:
 *      1 1
 *      8
 *   Output:
 *      Row 1 = 8
 *      Col 1 = 8
 *
 * ==============================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int row, col;
    printf("Input:\n");
    scanf("%d %d", &row, &col);
    int Metrix[row][col];
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            scanf("%d", &Metrix[r][c]);
        }
    }
    printf("Output:\n");
    int Sumrow, Sumcol;
    for (int r = 0; r < row; r++)
    {
        Sumrow = 0;
        for (int c = 0; c < col; c++)
        {
            Sumrow += Metrix[r][c];
        }
        printf("row %d = %d \n", r + 1, Sumrow);
    }
    for (int c = 0; c < col; c++)
    {
        Sumcol = 0;
        for (int r = 0; r < row; r++)
        {
            Sumcol += Metrix[r][c];
        }
        printf("col %d = %d \n", c + 1, Sumcol);
    }
    return 0;
}
