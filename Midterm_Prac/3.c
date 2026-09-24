#include <stdio.h>
int main()
{
    int point;
    printf("Enter your point: ");
    scanf("%d", &point);
    int Num = point / 10;
    switch (Num)
    {
    case 10 || 9 || 8:
        printf("A");
        break;
    case 7:
        printf("B");
        break;
    case 6:
        printf("D");
        break;
    case 5:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
    return 0;
}