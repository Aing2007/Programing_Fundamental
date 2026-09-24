#include <stdio.h>
int main()
{
    int num1, num2, T, m;
    printf("Enter Number 1 :");
    scanf("%d", &num1);
    printf("Enter Number 2 :");
    scanf("%d", &num2);
    T = num1 / num2;
    m = num1 % num2;
    printf("\nDivided : %d\n", T);
    printf("Fraction : %d\n", m);
    return 0;
}

/*================== Output ==================
Enter Number 1 :20
Enter Number 2 :4

Divided : 5
Fraction : 0



Enter Number 1 :25
Enter Number 2 :3

Divided : 8
Fraction : 1
*/