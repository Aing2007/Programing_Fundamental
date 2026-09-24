#include <stdio.h>
#include <string.h>

int main()
{
    int numberInput, seat, result = 1, number, i = 0, k;

    scanf("%d", &numberInput);
    number = numberInput;

    char num[100]; // แก้: ย้าย num ออกมานอก if เพื่อให้ใช้งานหลัง loop ได้

    while (result != 0)
    {
        result = number / 2;
        seat = number % 2;

        num[i] = seat + '0'; // แก้: เก็บ '0' หรือ '1' เป็น char
                             // เดิมไม่ได้เก็บ seat ของแต่ละรอบไว้

        i++;

        number = result;
    }

    num[i] = '\0'; // แก้: ปิดท้าย string หลังจากเก็บข้อมูลเสร็จ

    for (k = 0; k < i / 2; k++)
    {
        char temp = num[k];
        num[k] = num[i - k - 1];
        num[i - k - 1] = temp;
    }
    // แก้: กลับลำดับของเลขฐาน 2
    // เพราะเศษที่ได้จากการหารจะเรียงจากขวาไปซ้าย

    printf("%s\n", num);

    return 0;
}