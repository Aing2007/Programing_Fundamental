#include <stdio.h>
int main()
{
    char name1[20], surname1[20], id1[20], name2[20], surname2[20], id2[20], name3[20], surname3[20], id3[20];
    printf("Student1\n");
    printf("Name   :");
    scanf("%s", name1);
    printf("Surname:");
    scanf("%s", surname1);
    printf("ID     :");
    scanf("%s", id1);
    printf("\n");

    printf("Student2\n");
    printf("Name   :");
    scanf("%s", name2);
    printf("Surname:");
    scanf("%s", surname2);
    printf("ID     :");
    scanf("%s", id2);
    printf("\n");

    printf("Student3\n");
    printf("Name   :");
    scanf("%s", name3);
    printf("Surname:");
    scanf("%s", surname3);
    printf("ID     :");
    scanf("%s", id3);
    printf("\n");

    printf("+-------------------------------------------+----------+\n");
    printf("| %s \t\t %s \t\t | %s |\n", name1, surname1, id1);
    printf("| %s \t\t %s \t\t | %s |\n", name2, surname2, id2);
    printf("| %s \t\t %s \t\t | %s |\n", name3, surname3, id3);
    printf("+-------------------------------------------+----------+\n");

    return 0;
}

/*================== Output ==================
Student1
Name   :ifhhjbnf
Surname:fjwefnw
ID     :12345DD

Student2
Name   :ejwlfnw
Surname:fowkemfkw
ID     :12345FF

Student3
Name   :wemdwe
Surname:dkwmdfw
ID     :12345YY

+-------------------------------------------+----------+
| ifhhjbnf               fjwefnw                 | 12345DD |
| ejwlfnw                fowkemfkw               | 12345FF |
| wemdwe                 dkwmdfw                 | 12345YY |
+-------------------------------------------+----------+
*/