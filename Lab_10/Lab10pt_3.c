#include <stdio.h>
FILE *fp;
#define n 10
int Manage_Stock(char);
int Show_Stock();
int main()
{
    fp = fopen("../Temp/Stock.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file! (check empty file)\n");
        return 1;
    }
    char m, ch;
    printf("------------------------------------\n");
    printf("|       Manage Stock Program       |\n");
    printf("------------------------------------\n");
    ch = getc(fp);
    if (ch == EOF) // ถ้าไฟล์ว่าง ให้เข้าโหมด a อัตโนมัติ
    {
        printf("Enter to Add stock mode automaticly (empty stock)\n");
        Manage_Stock('a');
    }
    else
    {
        Show_Stock();
        printf("\n------------------------------------\n");
        printf("Enter 'a' to add stock (continute)\n");
        printf("Enter 'b' to add stock (That Already have)\n");
        printf("Enter 'c' to sell stock \n");
        printf("Enter 'x' to exit program\n");
        printf("------------------------------------\n");
        printf("Enter mode (a,b,c,x): ");
        scanf("%c", &m);
        Manage_Stock(m);
    }
    return 0;
}
int Manage_Stock(char mode)
{
    struct Data
    {
        char Name[20];
        int Prize;
        int store;
    } Stock[n];
    int i = 0;

    if (mode == 'a')
    {
        printf("Add item mode (continute) : Activated\n");
        Show_Stock();
        fp = fopen("../Temp/Stock.txt", "a");
        if (fp == NULL)
        {
            printf("Cannot open file!(add item mode)\n");
            return 1;
        }
        printf("Enter product name : ");
        scanf("%s", Stock[i].Name);
        printf("Enter product Prize : ");
        scanf("%d", &Stock[i].Prize);
        printf("Enter product stock : ");
        scanf("%d", &Stock[i].store);
        fprintf(fp, "product[%d]\nname : %s\nprize : %d\nstore: %d\n",
                i + 1, Stock[i].Name, Stock[i].Prize, Stock[i].store);
        i++;
        fclose(fp);
    }
    if (mode == 'b')
    {
        printf("Add stock mode (That Already have) : Activated\n");
        fp = fopen("../Temp/Stock.txt", "w");
        if (fp == NULL)
        {
            printf("Cannot open file!(add stock mode)\n");
            return 1;
        }
    }
    if (mode == 'c')
    {
        printf("sell stock mode : Activated\n");
        fp = fopen("../Temp/Stock.txt", "w");
        if (fp == NULL)
        {
            printf("Cannot open file!(sell mode)\n");
            return 1;
        }
    }
    if (mode == 'x')
    {
        printf("Save & Exit Programs\n");
        fclose(fp);
        return 0;
    }
}
int Show_Stock()
{
    char ch;
    fp = fopen("../Temp/Stock.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file!(show stock)\n");
        return 1;
    }
    ch = getc(fp);
    printf("Item in stock => \n");
    if (ch == EOF)
        printf("!!! out of stock !!!\n");
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fp);
    }
}