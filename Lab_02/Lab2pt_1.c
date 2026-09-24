#include <stdio.h>
int main()
{
    char T1[20], T2[20], T3[20], T4[20], T5[20];
    printf("Enter String 1 : ");
    scanf("%s", T1);
    printf("Enter String 2 : ");
    scanf("%s", T2);
    printf("Enter String 3 : ");
    scanf("%s", T3);
    printf("Enter String 4 : ");
    scanf("%s", T4);
    printf("Enter String 5 : ");
    scanf("%s", T5);

    printf("\n\n**** Output ****");
    printf("\n%c%c%c\n", T1[0], T1[1], T1[2]);
    printf("%c%c%c%c\n", T2[0], T2[1], T2[2], T2[3]);
    printf("%c%c%c%c%c\n", T3[0], T3[1], T3[2], T3[3], T3[4]);
    printf("%c%c%c%c\n", T4[0], T4[1], T4[2], T4[3]);
    printf("%c%c%c\n", T5[0], T5[1], T5[2]);
    return 0;
}

/*================== Output ==================
Enter String 1 : 11111
Enter String 2 : 11111
Enter String 3 : 11111
Enter String 4 : 11111
Enter String 5 : 11111


**** Output ****
111
1111
11111
1111
111
*/