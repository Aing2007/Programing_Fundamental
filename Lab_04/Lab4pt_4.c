#include <stdio.h>
int main()
{
    char text[20];
    int i = 0;
    printf("Enter String :");
    scanf("%s", text);
    while (text[i] != '\0')
    {
        printf("%c\n", text[i]);
        i++;
    }
    return 0;
}
