/*
 * ==============================================================
 *  หัวข้อ    : Array
 *  ข้อที่    : 6    |    ระดับ : ปานกลาง
 *  ชื่อโจทย์ : นับชนิดตัวอักษรในสตริง
 * ==============================================================
 *  [โจทย์]
 *    รับข้อความ 1 บรรทัด (มีช่องว่างได้ ยาวไม่เกิน 100 ตัวอักษร)
 *    นับจำนวนสระภาษาอังกฤษ (a e i o u ทั้งตัวเล็กและใหญ่)
 *    พยัญชนะภาษาอังกฤษ ตัวเลข และช่องว่าง
 *
 *  [Input]
 *    ข้อความ 1 บรรทัด
 *
 *  [Output]
 *    4 บรรทัด: Vowels, Consonants, Digits, Spaces
 *
 *  [Test case 1]
 *   Input:
 *      Hello World 2026
 *   Output:
 *      Vowels = 3
 *      Consonants = 7
 *      Digits = 4
 *      Spaces = 2
 *
 *  [Test case 2]
 *   Input:
 *      KMITL CE
 *   Output:
 *      Vowels = 2
 *      Consonants = 5
 *      Digits = 0
 *      Spaces = 1
 *
 *  [ข้อกำหนด / คำใบ้]
 *    อ่านทั้งบรรทัดด้วย fgets(str, sizeof(str), stdin) หรือ scanf(" %[^\n]", str)
 *    วนจนเจอ '\0' ; ระวัง '\n' ที่ fgets เก็บมาด้วย
 *
 * ==============================================================
 */
#include <stdio.h>

int main(void)
{
    char letter[100];
    int Vowels = 0, Consonants = 0, Digits = 0, Spaces = 0;
    printf("Input: \n");
    fgets(letter, 100, stdin);
    for (int i = 0; letter[i] != '\0'; i++)
    {
        if ((letter[i] < 'Z' && letter[i] > 'A') || (letter[i] < 'z' && letter[i] > 'a'))
        {
            Consonants++;
        }
        if ((letter[i] == 'A' || letter[i] == 'E' ||
             letter[i] == 'I' || letter[i] == 'O' ||
             letter[i] == 'U') ||
            (letter[i] == 'a' ||
             letter[i] == 'e' || letter[i] == 'i' ||
             letter[i] == 'o' || letter[i] == 'u'))
        {
            Vowels++;
        }
        if (letter[i] >= 48 && letter[i] <= 57)
        {
            Digits++;
        }
        if (letter[i] == ' ')
            Spaces++;
    }
    printf("Output:\n");
    printf("Vowels : %d \n", Vowels);
    printf("Consonants : %d \n", Consonants - Vowels);
    printf("Digits : %d \n", Digits);
    printf("Space : %d \n", Spaces);
    return 0;
}
