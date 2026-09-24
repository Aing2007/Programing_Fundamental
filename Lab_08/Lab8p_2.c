#include <stdio.h>
#include <string.h>
#define n 2
int main()
{
    int SerchID;
    struct Data
    {
        char Name[30];
        int ID;
        int Phone;
        char ProgG;
        char PhyG;
        char CalG;
        char CombG;
    };
    struct Data StuData[n];
    struct Data *Student[n];
    for (int i = 0; i < n; i++)
    {
        Student[i] = &StuData[i];
    }
    char NameInput[30];

    for (int i = 0; i < n; i++)
    {
        printf("============================\n");
        printf("Enter Student[%d] name : ", i + 1);
        fgets(NameInput, 30, stdin);
        strcpy(Student[i]->Name, NameInput);
        printf("Enter Student[%d] ID : ", i + 1);
        scanf("%d", &Student[i]->ID);
        printf("Enter Student[%d] Phone number : ", i + 1);
        scanf("%d", &Student[i]->Phone);
        printf("Enter Student[%d] Programing Grade : ", i + 1);
        scanf(" %c", &Student[i]->ProgG);
        printf("Enter Student[%d] Physice Grade : ", i + 1);
        scanf(" %c", &Student[i]->PhyG);
        printf("Enter Student[%d] Calculus Grade : ", i + 1);
        scanf(" %c", &Student[i]->CalG);
        printf("Enter Student[%d] Computer Basic Grade : ", i + 1);
        scanf(" %c", &Student[i]->CombG);
        getchar();
    }
    int CanFind = 0;
    printf("============== Serching System ==============\n");

    do
    {
        printf("Enter Student ID you want to fine : ");
        scanf("%d", &SerchID);
        for (int i = 0; i < n; i++)
        {
            if (Student[i]->ID == SerchID)

            {
                float GPA = ((4 - (Student[i]->ProgG - 'A')) + (4 - (Student[i]->PhyG - 'A')) + (4 - (Student[i]->CalG - 'A')) + (4 - (Student[i]->CombG - 'A'))) / 4;
                printf("==== Student Info ====\nStudent name :%sID : %d\nPhone : %d\n====Grade===\n",
                       Student[i]->Name, Student[i]->ID, Student[i]->Phone);
                printf("Programing Grade : %c \nPhysice Grade : %c\nCalculus Grade : %c\nComputer Basic Grade : %c\n",
                       Student[i]->ProgG, Student[i]->PhyG,
                       Student[i]->CalG, Student[i]->CombG);
                printf("GPA : %.2f \n", GPA);
                CanFind = 1;
            }
        }
        if (CanFind == 0)
        {
            printf("Serch not found !!!!\n");
            CanFind = 0;
        }
    } while (SerchID != 0);

    return 0;
}