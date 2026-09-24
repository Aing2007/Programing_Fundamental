#include <stdio.h>

int main()
{
    int person;
    printf("Enter number of person : ");
    scanf("%d", &person);
    int Height[100]; // ไม่ควรระบุไซส์ Array ด้วยค่าตัวแปร
    for (int i = 0; i < person; i++)
    {
        printf("Enter Height Student %d :", i + 1);
        scanf("%d", &Height[i]);
    }
    int x = 0;
    int range1 = 0, range2 = 0, range3 = 0, range4 = 0, sum = 0;
    while (x < person)
    {
        if (Height[x] <= 200 && Height[x] >= 181)
        {
            range4++;
        }
        else if (Height[x] <= 180 && Height[x] >= 171)
        {
            range3++;
        }
        else if (Height[x] <= 170 && Height[x] >= 161)
        {
            range2++;
        }
        else if (Height[x] <= 160 && Height[x] >= 0)
        {
            range1++;
        }
        sum += Height[x];
        x++;
    }
    printf("Student in Range 1 = %d\n", range1);
    printf("Student in Range 2 = %d\n", range2);
    printf("Student in Range 3 = %d\n", range3);
    printf("Student in Range 4 = %d\n", range4);
    printf("============================\n");
    printf("Average Height : %.2f \n", sum / person);
    printf("============================\n");
    for (int j = 0; j < person; j++)
        printf("%d\n", Height[j]);
    return 0;
}