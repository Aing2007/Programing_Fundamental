#include <stdio.h>
int main()
{
    struct Data
    {
        char name[20];
        int prize;
        float Discount;
    } Book1;
    printf("Book name : ");
    fgets(Book1.name, 20, stdin);
    printf("Book Prize : ");
    scanf("%d", &Book1.prize);
    Book1.Discount = 0.1;
    printf("Discount 10 Persents: %.2f\n", Book1.prize * Book1.Discount);
    printf("Total Prize : %.2f", Book1.prize * 0.9);

    return 0;
}