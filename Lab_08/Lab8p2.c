#include <stdio.h>
int main(void)
{
    int num = 19;
    float point = 26.09;
    char letter = 'D';
    int *pt_num;
    float *pt_point;
    char *pt_letter;

    pt_letter = &letter;
    pt_num = &num;
    pt_point = &point;

    printf("Address of letter  = %p \n", pt_letter);
    printf("Address of num  = %p \n", pt_num);
    printf("Address of point  = %p \n", pt_point);
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