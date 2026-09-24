#include <stdio.h>
#include <math.h>
int main()
{
    int X1, X2, Y1, Y2;
    scanf("%d %d", &X1, &Y1);
    scanf("%d %d", &X2, &Y2);
    int Dis = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
    printf("%d", Dis);
    return 0;
}