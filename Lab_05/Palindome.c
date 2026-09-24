#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char text[50];
    int lenght;
    bool Is_palimdome = false;
    scanf("%s", text);

    lenght = strlen(text);
    printf("%d", lenght);
    for (int i = 0; i <= lenght; i++)
    {
        if (toupper(text[i]) == toupper(text[(lenght - 1) - i]))
        {
            if (i == lenght / 2)
            {
                Is_palimdome = true;
            }
        }
        if (toupper(text[i]) != toupper(text[(lenght - 1) - i]))
        {

            Is_palimdome = false;
        }
    }
    if (Is_palimdome)
        printf("True");
    else
        printf("False");
    return 0;
}
