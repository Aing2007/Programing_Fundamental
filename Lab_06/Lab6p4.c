#include <stdio.h>
int main()
{
    char letter[100];
    int Word = 1, WordNum = 0, i = 0;
    printf("input :");
    fgets(letter, 100, stdin);

    while (letter[i] != '\0')
    {
        if (letter[i] == ' ')
        {
            Word++;
        }
        i++;
    }
    printf("output : %d words\n", Word);
    for (int k = 0; letter[k] != '\0'; k++)
    {
        if (letter[k] != ' ')
        {
            WordNum++;
            printf("%c", letter[k]);
        }
        else
        {
            printf("\t: %d words\n", WordNum);
            WordNum = 0;
        }
    }

    return 0;
}