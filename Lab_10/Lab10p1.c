// #include <stdio.h>
// int main(void)
// {
//     FILE *fp;
//     fp = fopen("../test.txt", "r");
//     if (fp == NULL)
//         printf("Error Cannot open file!!");
//     else
//     {
//         printf("Can open file.\n");
//     }
//     return 0;
// }
// 1.การรันโปรแกรมครั้งแรกให้ผลลัพท์คือ Can open file.
//=======================================
// 2.ผลที่ได้ไม่ต่างกับข้อ 1 เพราะไม่ได้มีส่วนแสดงผล และไม่ได้แก้โต้ดเพิ่มเติม
// 3.ผลลัพท์คือ Error Cannot open file !! เพราะตำแหน่งไฟล์ไม่ถูกต้อง
// 4.ต้องแก้ไขตำแหน่งของไฟล์ให้ถูกต้อง
#include <stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("../Temp/test.txt", "r"); // <-- แก้ตรงนี้
    if (fp == NULL)
        printf("Error Cannot open file!!");
    else
    {
        printf("Can open file.\n");
    }
    return 0;
}