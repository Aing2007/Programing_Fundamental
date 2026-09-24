#include <stdio.h>
int main()
{
    int a, b;

    printf("\nWidth : ");
    scanf("%d", &a);

    printf("Height: ");
    scanf("%d", &b);

    printf("\nArea Is  : %d Units^2", a * b);

    return 0;
}

/*================== Output ==================
Width : 13
Height: 13

Area Is  : 169 Units^2
*/