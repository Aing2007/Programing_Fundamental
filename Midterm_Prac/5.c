#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num;
    bool Is_Prime = true;
    printf("Enter Number:");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Is_Prime = false;
        }
    }
    if (Is_Prime)
        printf("%d Is Prime Number", num);
    else
        printf("%d Is NOT Prime Number!!", num);
    return 0;
}