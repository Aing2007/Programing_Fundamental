#include <stdio.h>
int main()
{
    float Grade1, Grade2, Grade3, Grade4, Grade5;
    int git1, git2, git3, git4, git5;
    scanf("%f %d", &Grade1, &git1);
    scanf("%f %d", &Grade2, &git2);
    scanf("%f %d", &Grade3, &git3);
    scanf("%f %d", &Grade4, &git4);
    scanf("%f %d", &Grade5, &git5);
    float GPA = ((Grade1 * git1) + (Grade2 * git2) + (Grade3 * git3) + (Grade4 * git4) + (Grade5 * git5)) / (git1 + git2 + git3 + git4 + git5);
    if (GPA < 2.00)
        printf("Pro !! (%.2f)", GPA);
    else
        printf("GPA = %.2f", GPA);
    return 0;
}