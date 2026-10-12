#include <stdio.h>
FILE *fp;
char name[20], surname[20];
int id;
void input_student_info(int);
int main()
{
    char ch;
    fp = fopen("../Temp/DataRecord.txt", "r");
    if (fp != NULL)
    {
        printf("Can open file (read)\n");
        printf("-----------------------------------");
        printf("|         Data in file            |");
        printf("-----------------------------------");
        ch = getc(fp);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = getc(fp);
        }
        printf("-----------------------------------");
        if (!fclose(fp))
            printf("\nClose File\n");
        input_student_info(0);
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

/*
Can open file (Overwrites)
Enter ID        :69011172
Enter Name      :Sutinun
Enter Surname   :Sriviset
*/
// ข้อมูลในไฟล์ DataRecord.txt คือ "Sutinun Sriviset 69011172"