#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            printf(" ");
        }
        printf("/");
        for (int k = 0; k < i - 1; k++)
        {

            printf(i == num ? "__" : "  ");
        }
        printf("\\");
        printf("\n");
    }
    printf("\n");
    return 0;
}

//*  /\
    /  \
   /    \
  /      \
 /________\
 */