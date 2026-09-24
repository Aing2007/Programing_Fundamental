#include <stdio.h>
int main(void)
{
    int num1 = 133, num2;
    float price1 = 4.85;
    char hint1 = 'J', hint2;

    int *pt_num;
    float *pt_price;
    char *pt_hint;

    pt_num = &num1;
    pt_price = &price1;
    pt_hint = &hint1;

    num2 = *pt_num;
    hint2 = *pt_hint;

    printf("Variable num1  = %d \n", num2);
    printf("Variable price1  = %f \n", *pt_price);
    printf("Variable hint2  = %c \n", hint2);
    return 0;
}

// pt_letter: 0x000000016fdfead3 "DR\xb8\xd0A\U00000013"
// &pt_letter: 0x000000016fdfeab8
// pt_num: 0x000000016fdfead8
// &pt_num: 0x000000016fdfeac8
// pt_point: 0x000000016fdfead4
// &pt_point: 0x000000016fdfeac0
// &letter: 0x000000016fdfead3 "DR\xb8\xd0A\U00000013"
// &num: 0x000000016fdfead8
// &point: 0x000000016fdfead4