#include <stdio.h>
void primecheck(int num)
{
    int Isprime = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            Isprime = 0;
            break;
        }
        else if (num % i != 0)
        {
            Isprime = 1;
        }
    }
    if (Isprime == 1)
        printf("%4d", num);
}
int main()
{
    primecheck(2);
    return 0;
}