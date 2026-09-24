#include <stdio.h>
int main()
{
    int ID[4][1];
    char name[8][50];
    for (int i = 0; i < 4; i++)
    {

        printf("Input data of student [%d]\n", i + 1);
        printf("Enter Name <%d>: ", i + 1);
        scanf("%s", name[i * 2]); // 0,2,4,6,8

        printf("Enter Surname <%d>: ", i + 1);
        scanf("%s", name[i * 2 + 1]); // 1,3,5,7

        printf("Enter ID : ");
        scanf("%d", &ID[i][1]);
    }
    int number;
    do // ทำไปเรื่อยๆ
    {
        printf("==========> Enter number of student : ");
        scanf("%d", &number);
        int position = number - 1;
        printf("Name <%d> : %s %s \n", number, name[position * 2], name[position * 2 + 1]);
        printf("ID <%d> : %d \n", number, ID[position][1]);
    } while (number != 0); // จนกว่า number == 0

    return 0;
}