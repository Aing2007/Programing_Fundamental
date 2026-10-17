#include <stdio.h>
int main()
{
    FILE *fp;
    FILE *fp2;
    char ch, filename[50], missionfile[50];
    printf("Enter file name : ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    printf("Enter file name to copy to: ");
    scanf("%s", missionfile);
    fp2 = fopen(missionfile, "w");
    if (fp != NULL)
    {
        ch = getc(fp);
        while (ch != EOF)
        {
            putc(ch, fp2);
            ch = getc(fp);
        }
    }
}