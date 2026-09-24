#include <stdio.h>

int main()
{
    int Data[100], n = 0;
    char ch;

    while (scanf("%d", &Data[n]) == 1)
    {
        n++;
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
    }
    int sum = 0, Mean = 0, Median = 0, Max = Data[0], Min = Data[0], Sorted[n];

    for (int i = 0; i < n; i++)
    {
        sum += Data[i];
        if (Max < Data[i])
            Max = Data[i];
        if (Min > Data[i])
            Min = Data[i];
        if (Data[i] > Data[i + 1])
        {
            Data[i] = Data[i + 1];
            Sorted[i] = Data[i];
        }
    }
    Mean = sum / n;
    Median = Data[n / 2];
    printf(" Sum:%d\n Mean:%d\n Median:%d\n Max:%d\n Min:%d\n", sum, Mean, Median, Max, Min);
    printf(" Sorted: ");
    for (int k = 0; k <= n; k++)
    {
        printf("%d ", Sorted[k]);
    }
    return 0;
}