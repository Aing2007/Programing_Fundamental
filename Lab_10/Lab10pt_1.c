#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("../Temp/letter.txt", "r");
    int character = 0, word = 0, sentense = 0;
    char ch;
    if (fp != NULL)
    {
        printf(" ---------------------------------\n");
        printf("|   Counting text file program.   |\n");
        printf(" ---------------------------------\n");
        ch = getc(fp);
        while (ch != EOF)
        {
            if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A') || (ch <= '9' && ch >= '0'))
                character++;
            else if (ch == ' ' || ch == '\t' || ch == '\n')
                word++;
            else if (ch == '.' || ch == '!' || ch == '?')
                sentense++;
            ch = getc(fp);
        }
        printf("Characters : %d\n", character);
        printf("Words : %d\n", word);
        printf("Sentenses : %d\n", sentense);
    }
    if (fp == NULL)
    {
        printf("Cannot open file !!!!");
    }
    return 0;
}