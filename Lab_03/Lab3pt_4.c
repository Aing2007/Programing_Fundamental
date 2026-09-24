#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num, num2, num3, max = 0, position = 1;
    bool isSide = false;
    printf("Enter side of triangle : ");
    scanf("%d", &num);
    printf("Enter side of triangle : ");
    scanf("%d", &num2);
    printf("Enter side of triangle : ");
    scanf("%d", &num3);
    max = num;
    if (num2 > max)
    {
        max = num2;
        position = 2;
    }
    if (num3 > max)
    {
        max = num3;
        position = 3;
    }
    if (position == 1)
    {
        if ((num2 * num2) + (num3 * num3) == (num * num))
        {
            isSide = true;
        }
    }
    else if (position == 2)
    {
        if ((num * num) + (num3 * num3) == (num2 * num2))
        {
            isSide = true;
        }
    }
    else if (position == 3)
    {
        if ((num * num) + (num2 * num2) == (num3 * num3))
        {
            isSide = true;
        }
    }
    if (isSide)
    {
        printf("\nThis is a rightangled triangle.");
    }
    else
    {
        printf("\nThis is not a rightangled triangle.");
    }

    return 0;
}

/*========================= output ==========================
Enter side of triangle : 9
Enter side of triangle : 12
Enter side of triangle : 15

This is a rightangled triangle.


Enter side of triangle : 6
Enter side of triangle : 7
Enter side of triangle : 8

This is not a rightangled triangle.
*/