#include <stdio.h>
void g(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 2);
    g(n / 2);
}
int main()
{
    g(6);
}