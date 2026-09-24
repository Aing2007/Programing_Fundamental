// nested pointer เอาไว้ชี้(เก็บตำแหน่ง) pointrt อีกทีหนึ่ง#

#include <stdio.h>
int main()
{
    int num = 10;
    int *pt_num = &num;
    int **ptt_num = &pt_num;
    printf("%d \n", num);
    printf("%p \n", pt_num);
    printf("%p \n\n", ptt_num);
    printf("%d \n", *pt_num);
    printf("%p \n", *ptt_num);
    printf("%d \n", **ptt_num); // ชี้ไปที่ pt_num และ num
}