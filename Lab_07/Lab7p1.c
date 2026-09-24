// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     struct student
//     {
//         int ID;
//         char name[10]; /* data */
//     };
//     struct student s1, s2, s3;
//     s1.ID = 49010001;
//     strcpy(s1.name, "ALPHA");
//     s2.ID = s1.ID + 1;
//     s2.name = "Delta";  <===ไม่สามารถ assign ค่า string ไว้ในตัวแปร char ได้โดยตรง ต้องใช้ strcpy หรือใช้ index
//     printf(" %d,%s", s1.ID, s1.name);
//     printf(" %d,%s", s2.ID, s2.name);
//     return 0;
// }
//================================== แก้ไขให้รับค่าจาก keyboard ได้ =================
#include <stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        int ID;
        char name[10]; /* data */
    };
    struct student s1, s2, s3;
    printf("Enter name student 1: ");
    scanf("%s", s1.name);
    printf("Enter ID student 1: ");
    scanf("%d", &s1.ID);
    printf("Enter name student 2: ");
    scanf("%s", s2.name);
    printf("Enter ID student 2: ");
    scanf("%d", &s2.ID);
    printf("Enter name student 3: ");
    scanf("%s", s3.name);
    printf("Enter ID student 3: ");
    scanf("%d", &s3.ID);
    printf(" %d,%s \n", s1.ID, s1.name);
    printf(" %d,%s \n", s2.ID, s2.name);
    printf(" %d,%s", s3.ID, s3.name);
    return 0;
}