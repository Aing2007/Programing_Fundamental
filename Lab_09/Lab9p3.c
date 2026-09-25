#include <stdio.h>

void primecheck(int num)
{
    int Isprime = 1;

    if (num < 2)
        Isprime = 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Isprime = 0;
            break;
        }
    }

    if (Isprime == 1)
        printf("%4d", num);
}

int main()
{
    int num1, num2;
    printf("Enter number [1] : ");
    scanf("%d", &num1);
    printf("Enter number [2] : ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        primecheck(i);
    }
    return 0;
}
