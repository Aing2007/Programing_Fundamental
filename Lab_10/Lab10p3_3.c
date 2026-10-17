
#include <stdio.h>
FILE *fp;
char name[20], surname[20];
int id;
void input_student_info(int);
int main()
{
    char ch, Dis;
    fp = fopen("../Temp/DataRecord.txt", "r");
    if (fp != NULL)
    {
        printf("Can open file (read)\n");
        printf("Display File Data => Insert 'D' : \n"); // ถ้าต้องการแสดงเนื้อหา ให้พิมพ์ "D"
        scanf(" %c", &Dis);
        if (Dis == 'D') // ถ้า input = D ให้ทำการแสดงข้อมูลในไฟล์
        {
            printf("-----------------------------------\n");
            printf("|         Data in file            |\n");
            printf("-----------------------------------\n");
            ch = getc(fp);
            while (ch != EOF)
            {
                printf("%c", ch);
                ch = getc(fp);
            }
            printf("-----------------------------------\n");
            if (!fclose(fp))
                printf("\nClose File\n");
        }
        else
        {
            if (!fclose(fp))
                printf("======Close File======\n");
            input_student_info(0);
        }
    }
    else
        input_student_info(1);
    return 0;
}
void input_student_info(int mode)
{
    if (mode)
    {
        fp = fopen("../Temp/DataRecord.txt", "w");
        printf("Can open file (Overwrites)\n");
    }
    else
    {
        fp = fopen("../Temp/DataRecord.txt", "a");
        printf("Can open file (Append)\n");
    }
    printf("Enter ID \t:");
    scanf("%d", &id);
    printf("Enter Name\t:");
    scanf("%s", name);
    printf("Enter Surname\t:");
    scanf("%s", surname);
    fprintf(fp, "%s %s %d\n", name, surname, id);
}
