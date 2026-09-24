#include <stdio.h>
int main()
{
    char text[20];
    int i = 0;
    printf("Enter String :");
    scanf("%s", text);
    while (text[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}
