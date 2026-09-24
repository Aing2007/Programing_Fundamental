#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define n 2
int main()
{
    struct Supply_Data
    {
        char name[50];
        int prize;
        int remain;
    } product[n];
    int prize, remain;
    char Inputname[50];
    printf("Please input product Data : ");
    for (int i = 0; i < n; i++)
    {
        printf("==========Product [%d]=============\n", i + 1);

        printf("Product[%d] Name : ", i + 1);
        scanf("%s", product[i].name);

        do
        {
            printf("Product[%d] Prize (more than 0): ", i + 1);
            scanf("%d", &prize);
        } while (prize <= 0);
        product[i].prize = prize;

        do
        {
            printf("Product[%d] remain(more than 0) : ", i + 1);
            scanf("%d", &remain);
        } while (remain <= 0);
        product[i].remain = remain;
    }

    printf("=========Product Selling==========\n");
    printf("Enter Product Name \nOR Press 'X' to exit \nOR Press 'Show' to show stock\n");

    char Selled_Product[50];
    int Selled_Number, sell;
    bool CanFind = false;

    do
    {
        printf("Input Selled Product name (just 1 pice): ");
        scanf("%s", Selled_Product);

        if (strcmp(Selled_Product, "Show") == 0)
        {
            printf("=======All in Stock=======\n");
            for (int k = 0; k < n; k++)
            {
                printf("Product name: %s | Prize : %d | Remain : %d\n",
                       product[k].name, product[k].prize, product[k].remain);
                CanFind = true;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (strcmp(Selled_Product, product[i].name) != 0 && strcmp(Selled_Product, "Show") != 0)
                CanFind = false;

            else if (strcmp(Selled_Product, product[i].name) == 0 && product[i].remain > 0)
            {
                do
                {
                    printf("Input Number of Product to sell (more than 0): ");
                    scanf("%d", &sell);
                } while (sell <= 0);

                Selled_Number = sell;

                if (Selled_Number > product[i].remain)
                {
                    printf("Not enough stock!!!\n\n");
                }
                else
                {
                    product[i].remain -= Selled_Number;
                    printf("Product : %s | Prize : %d Bath| remains : %d \n\n",
                           product[i].name, product[i].prize, product[i].remain);
                }

                CanFind = true;
                break;
            }
        }

        if (CanFind == false)
        {
            printf("Can't find product please try again !!!!!\n");
        }

    } while (strcmp(Selled_Product, "X") != 0);

    return 0;
}