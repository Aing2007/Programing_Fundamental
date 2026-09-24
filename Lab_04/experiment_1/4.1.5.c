#include <stdio.h>
int main()
{
    printf("Show number from hundred to zero\n\n");
    for (int i = 100; i >= 0; i--)
        printf("%d\n", i);
    return 0;
}