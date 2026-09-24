#include <stdio.h>
#include <string.h>
#define n 2
int main()
{
    int SerchID;
    struct AddressData
    {
        char NumHouse[50];
        char Road[50];
        char Subdistrict[50];
        char District[50];
        char Province[50];
        char Zipcode[50];
    };
    struct ContactData
    {
        char LandlineNumber[50], MobileNumber[50], FaxNumber[50];
    };
    struct AddressData Address;
    struct ContactData Contact;
    struct Data
    {
        char Name[30];
        int ID;
        int Phone;
        char ProgG;
        char PhyG;
        char CalG;
        char CombG;
        struct AddressData *AddressPtr;
        struct ContactData *ContactPtr;
    };

    struct Data StuData[n];
    struct Data *StudentPtr[n];

    for (int i = 0; i < n; i++)
    {
        StudentPtr[i] = &StuData[i];
        StudentPtr[i]->AddressPtr = &Address;
        StudentPtr[i]->ContactPtr = &Contact;
    }
    char NameInput[30];
    for (int i = 0; i < n; i++)
    {
        printf("============================\n");
        printf("Enter Student[%d] name : ", i + 1);
        fgets(NameInput, 30, stdin);
        strcpy(StudentPtr[i]->Name, NameInput);
        printf("Enter Student[%d] ID : ", i + 1);
        scanf("%d", &StudentPtr[i]->ID);
        printf("Enter Student[%d] Phone number : ", i + 1);
        scanf("%d", &StudentPtr[i]->Phone);
        printf("Enter Student[%d] Programing Grade : ", i + 1);
        scanf(" %c", &StudentPtr[i]->ProgG);
        printf("Enter Student[%d] Physice Grade : ", i + 1);
        scanf(" %c", &StudentPtr[i]->PhyG);
        printf("Enter Student[%d] Calculus Grade : ", i + 1);
        scanf(" %c", &StudentPtr[i]->CalG);
        printf("Enter Student[%d] Computer Basic Grade : ", i + 1);
        scanf(" %c", &StudentPtr[i]->CombG);
        printf("Enter Student[%d] Address(Number of house) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->NumHouse);
        printf("Enter Student[%d] Address(Road) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->Road);
        printf("Enter Student[%d] Address(Subdistrict) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->Subdistrict);
        printf("Enter Student[%d] Address(district) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->District);
        printf("Enter Student[%d] Address(Province) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->Province);
        printf("Enter Student[%d] Address(ZipCode) : ", i + 1);
        scanf(" %s", StudentPtr[i]->AddressPtr->Zipcode);
        printf("Enter Student[%d] Contact(Landlinenumber) : ", i + 1);
        scanf(" %s", StudentPtr[i]->ContactPtr->LandlineNumber);
        printf("Enter Student[%d] Contact(Mobilenumber) : ", i + 1);
        scanf(" %s", StudentPtr[i]->ContactPtr->MobileNumber);
        printf("Enter Student[%d] Contact(Faxnumber) : ", i + 1);
        scanf(" %s", StudentPtr[i]->ContactPtr->FaxNumber);
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
            if (StudentPtr[i]->ID == SerchID)

            {
                float GPA = ((4 - (StudentPtr[i]->ProgG - 'A')) + (4 - (StudentPtr[i]->PhyG - 'A')) + (4 - (StudentPtr[i]->CalG - 'A')) + (4 - (StudentPtr[i]->CombG - 'A'))) / 4;
                printf("==== Student Info ====\nStudent name :%sID : %d\nPhone : %d\n====Grade===\n",
                       StudentPtr[i]->Name, StudentPtr[i]->ID, StudentPtr[i]->Phone);
                printf("Programing Grade : %c \nPhysice Grade : %c\nCalculus Grade : %c\nComputer Basic Grade : %c\n",
                       StudentPtr[i]->ProgG, StudentPtr[i]->PhyG,
                       StudentPtr[i]->CalG, StudentPtr[i]->CombG);
                printf("GPA : %.2f \n", GPA);
                printf("===== Address & Contact Info =====\n");
                printf("House Number : %s | Road : %s | Subdistrict : %s | District : %s | Province : %s | Zipcode : %s \n", StudentPtr[i]->AddressPtr->NumHouse, StudentPtr[i]->AddressPtr->Road, StudentPtr[i]->AddressPtr->Subdistrict, StudentPtr[i]->AddressPtr->District, StudentPtr[i]->AddressPtr->Province, StudentPtr[i]->AddressPtr->Zipcode);
                printf("Landline Number : %s | Mobile Number : %s | Fax Number : %s \n", StudentPtr[i]->ContactPtr->LandlineNumber, StudentPtr[i]->ContactPtr->MobileNumber, StudentPtr[i]->ContactPtr->FaxNumber);
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