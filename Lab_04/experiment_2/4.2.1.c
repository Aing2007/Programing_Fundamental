#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    printf("Show Number :");
    for (int i = 1; i <= num; i++)
    {
        printf("%d\t", i);
    }
}