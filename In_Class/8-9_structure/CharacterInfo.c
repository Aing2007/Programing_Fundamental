#include <stdio.h>
int main()
{
    struct Data
    {
        char Name[20];
        int Age;
    } Char[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Data Charactor [%d] : \n", i + 1);
        printf("Enter Name :");
        scanf("%s", Char[i].Name);
        printf("Enter Age :");
        scanf("%d", &Char[i].Age);
    }
    printf("Charactor age < 20 ========\n");
    for (int k = 0; k < 10; k++)
    {
        if (Char[k].Age < 20)
        {
            printf("Name : %s", Char[k].Name);
            printf(" Age : %d\n", Char[k].Age);
        }
    }

    return 0;
}