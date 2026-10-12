#include <stdio.h>
int main()
{
    FILE *fp;
    char ch, name[20], surname[20];
    int id;
    fp = fopen("../Temp/test.txt", "r");
    if (fp != NULL)
    {
        printf("Can open file\n");
        fscanf(fp, "%s %s %d", name, surname, &id);
        if (!fclose(fp))
            printf("\nClose File\n");
        printf("-----------------\n");
        printf("|  Data in file |\n");
        printf("Student is %d\n", id);
        printf("Name is %s %s\n", name, surname);
    }
    else
        printf("Error Cannot open file\n");
    return 0;
}

// โปรแกรมแสดงผลลัพท์จากการอ่านไฟล์ จากนั้นนำค่าที่อ่านได้เก็บในตัวแปร Name Surname และ id
// โดยอ่านจนกว่าจะเจอ space ของแต่ละคำ จากนั้นแสดงผล