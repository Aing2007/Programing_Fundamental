#include <stdio.h>
#define n 3
int main()
{
    float Data[n], Input;
    float *DataPt = Data;
    char Answer = 'N';
    int Is_Find = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Input float [%d] :", i + 1);
        scanf("%f", &Data[i]);
    }
    do
    {
        printf("================================\n");
        printf("Waiting for input : ");
        scanf("%f", &Input);
        for (int i = 0; i < n; i++)
        {
            if (Input == *(DataPt + i))
            {
                printf("position : %d number is : %f \n", i + 1, Input);
                Is_Find = 1;
            }
        }
        if (Is_Find == 0)
        {
            printf("Connot find the matched data !!!\n");
            Is_Find = 0;
        }
        printf("Want to fine more ??\nAnswer Y / N :");
        scanf(" %c", &Answer);
        printf("\n\n");
    } while (Answer != 'N');
}
