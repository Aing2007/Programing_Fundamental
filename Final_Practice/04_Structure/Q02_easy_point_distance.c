/*
 * ==============================================================
 *  หัวข้อ    : Structure
 *  ข้อที่    : 2    |    ระดับ : ง่าย
 *  ชื่อโจทย์ : ระยะทางระหว่างจุด 2 จุด
 * ==============================================================
 *  [โจทย์]
 *    ประกาศ struct Point { double x, y; };
 *    เขียนฟังก์ชัน  double distance(struct Point a, struct Point b);
 *
 *  [Input]
 *    x1 y1 x2 y2
 *
 *  [Output]
 *    Distance ทศนิยม 2 ตำแหน่ง
 *
 *  [Test case 1]
 *   Input:
 *      0 0 3 4
 *   Output:
 *      Distance = 5.00
 *
 *  [Test case 2]
 *   Input:
 *      1 2 2 3
 *   Output:
 *      Distance = 1.41
 *
 *  [ข้อกำหนด / คำใบ้]
 *    #include <math.h> ใช้ sqrt()
 *
 * ==============================================================
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
    struct P
    {
        int x1;
        int x2;
        int y1;
        int y2;
    } point;
    scanf("%d %d %d %d", &point.x1, &point.y1, &point.x2, &point.y2);
    float dist = sqrt(((point.y2 - point.y1) * (point.y2 - point.y1)) + ((point.x2 - point.x1) * (point.x2 - point.x1)));
    printf("Dist : %.2f", dist);
    return 0;
}
