#include <stdio.h>

int main()
{
    float GPA1, GPA2, GPS2;

    printf("Enter Your GPA (1-1): ");
    scanf("%f", &GPA1);

    if (GPA1 >= 2.00)
        printf("Your Status = Normal\n");
    else if (1.00 >= GPA1 <= 2.00)
        printf("Your Status = Probation\n");
    else if (GPA1 < 1.00)
    {
        printf("Your Status = Retired\n");
        return 0;
    }

    printf("Enter Your GPS (1-2): ");
    scanf("%f", &GPS2);
    printf("Enter Your GPA (1-2): ");
    scanf("%f", &GPA2);

    if (GPA2 >= 2.00)
        printf("Your Status = Normal\n");
    else if (GPS2 <= 2.00 || (GPA1 < 2.00 && GPA2 < 1.00))
        printf("Your status: Probation");
    else if ((GPA1 < 2.00 && GPA2 < 2.00) || (GPA1 < 2.00 && GPA2 < 2.00))
        printf("Your Status = Retired\n");

    return 0;
}