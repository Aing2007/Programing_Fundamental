#include <stdio.h>
struct Data
{
    int ID;
    char name[10];
    int score;
    int Mid;
    int Final;
    int attendance;
    int all_attendance;
} Studentname[10];
struct Data1
{
    int ID;
    int score;
    int Mid;
    int Final;
} Studentscore[10];
struct Data2
{
    int ID;
    int attendance;
    int all_attendance;
} Studentatten[10];
int main()
{
    int ID;
    FILE *fp3 = fopen("../data/attendance.dat", "r");
    FILE *fp2 = fopen("../data/scores.dat", "r");
    FILE *fp1 = fopen("../data/students.dat", "r");
    if (fp1 != NULL && fp2 != NULL && fp3 != NULL)
    {
        do
        {
            printf("========== STUDENT PERFORMANCE REPORT ==========\n");
            printf("ID      Name       Total Score    Attendance\n");
            printf("------------------------------------------------\n");
            printf("Enter ID :");
            scanf("%d", &ID);
            int i = 0;
            while (i < 5)
            {
                fscanf(fp1, "%d %s", &Studentname[i].ID, Studentname[i].name);
                fscanf(fp2, "%d %d %d %d", &Studentscore[i].ID, &Studentscore[i].score, &Studentscore[i].Mid, &Studentscore[i].Final);
                fscanf(fp3, "%d %s", &Studentatten[i].ID, &Studentatten[i].attendance, &Studentatten[i].all_attendance);
                printf("%d\t%s\t%d\t%d \n", Studentname[i].ID, Studentname[i].name,
                       Studentscore[i].score + Studentscore[i].Mid + Studentscore[i].Final, Studentatten[i].attendance);
                i++;
            }

        } while (ID != 0);
    }
    else
        printf("Can't open file.");
}
