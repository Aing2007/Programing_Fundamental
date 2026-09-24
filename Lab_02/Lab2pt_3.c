#include <stdio.h>
int main()
{
    int n;
    float IA;

    printf("\nNumber of sides : ");
    scanf("%d", &n);
    IA = ((float)n - 2) * 180.0;
    printf("\nInside Angle is  : %.2f ", IA);

    return 0;
}

/*================== Output ==================
Number of sides : 5

Inside Angle is  : 540.00
*/