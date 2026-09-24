#include <stdio.h>

int main()
{
    char text;
    int num;
    printf("Enter text: ");
    scanf(" %d", &num);

    // 1. เช็กว่าเป็นตัวพิมพ์เล็ก (a-z)
    if (text >= 'a' && text <= 'z')
    {
        printf("%c is a lower letter (ASCII code is %d, Hex: %X)\n", text, text, text);
    }
    // 2. เช็กว่าเป็นตัวพิมพ์ใหญ่ (A-Z)
    else if (text >= 'A' && text <= 'Z')
    {
        printf("%c is an Upper letter (ASCII code is %d, Hex: %X)\n", text, text, text);
    }
    // 3. เช็กว่าเป็นอักขระตัวเลข (0-9) -> ASCII คือ 48 ถึง 57
    else if (num >= 0 && num <= 9)
    {
        printf("%c is a Digit (ASCII code is %d, Hex: %X)\n", num, num, num);
    }
    // 4. ถ้าไม่ใช่ทั้งสามกลุ่มด้านบน
    else
    {
        printf("%c is another type of letter (ASCII code is %d, Hex: %X)\n", text, text, text);
    }

    return 0;
}
