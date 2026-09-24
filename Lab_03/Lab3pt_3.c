#include <stdio.h>

int main()
{
    int num, num2, num3, max = 0, position = 1;

    printf("Enter number 1 : ");
    scanf("%d", &num);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Enter number 3 : ");
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

    printf("Maximum is number %d (%d)", position, max);
    return 0;
}

/*========================= output ==========================
Enter number 1 : -16
Enter number 2 : 57
Enter number 3 : 99
Maximum is number 3 (99)


*/