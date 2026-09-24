#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    int money;
    scanf("%c", text);
    scanf("%c", &money);
    int Long = strlen(text), numOf = 0;
    for (int i = 0; i <= Long; i++)
    {
        if (text[i] == "/")
            numOf++;
    }
    int Person = numOf + 1;
    float Money_Person = money / Person;
    printf("%d", Money_Person);
    // printf("%d", );
    return 0;
}

// Tips:  Run for check input format