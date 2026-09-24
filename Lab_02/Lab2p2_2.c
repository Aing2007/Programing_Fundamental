#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter Number a : ");
    scanf("%d", &a);
    printf("Enter Number b : ");
    scanf("%d", &b);
    printf("Enter Number c : ");
    scanf("%d", &c);
    avg = (a + b + c) / 3.0;
    printf("Average of %d, %d,%d is : %.2f", a, b, c, avg);
    return 0;
}

/*================== Output ==================
Enter Number a : 60
Enter Number b : 78
Enter Number c : 80
Average of 60, 78,80 is : 72.67
*/
