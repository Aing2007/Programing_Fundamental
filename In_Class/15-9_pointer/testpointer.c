#include <stdio.h>
int main()
{
    int num = 10;
    int *pt_num = &num;
    // char string[100] = &num; // ใช้ตัวแปรธรรมดา เก็บค่า Address ไม่ได้
    printf("%p \n", &num);   // แสดง Address num
    printf("%p\n", pt_num);  // แสดง Address ที่เก็บใน pt_num
    printf("%d\n", *pt_num); // ชี้ไปที่ Address num เพื่อแสดงค่าที่ตำแหน่งนั้น
    printf("%p\n", &pt_num);
    // printf("%s\n", string);
}
// & เก็บตำแหน่ง
// แสดงค่าที่เก็ยในตำแหน่ง ด้วยการชี้