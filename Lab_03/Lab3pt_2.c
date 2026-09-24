#include <stdio.h>

int main()
{
    int num, num2, sum = 0;

    printf("Enter number 1 : ");
    scanf("%d", &num);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    if (num == num2)
    {
        sum = num + num2;
        printf("%d + %d = %d", num, num2, sum);
    }
    else if (num != num2)
    {
        sum = num - num2;
        printf("%d - %d = %d", num, num2, sum);
    }
    return 0;
}

/*========================= output ==========================
Enter number 1 : 4
Enter number 2 : 5
4 - 5 = -1

Enter number 1 : 4
Enter number 2 : 4
4 + 4 = 8
*/