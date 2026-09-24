#include <stdio.h>
#include <string.h>

int main(void)
{
    struct album_data
    {
        char name[50];
        int years;
        char FavSong[3][50]; //<==กำหนด FavSong เป็น Array 2 มิติ สำหรับเก็บชื่อเพลงฮิต
    };

    struct Artists
    {
        char name[5][50];
        struct album_data album[10];
        int num_album;
    };

    struct Artists artist[5];
    int i;
    //===================================Artist Name===========================
    strcpy(artist[0].name, "The Corrs");
    strcpy(artist[1].name, "The Aing");
    strcpy(artist[2].name, "The GGGGG");
    strcpy(artist[3].name, "The YongOHM");
    strcpy(artist[4].name, "The Z9");
    //===================================Artist1===========================
    strcpy(artist[0].album[0].name, "Forgiven, Not Forgotten");
    artist[0].album[0].years = 1995;

    strcpy(artist[0].album[1].name, "Talk On Corners");
    artist[0].album[1].years = 1998;

    strcpy(artist[0].album[2].name, "The Corrs Unplugged");
    artist[0].album[2].years = 1999;

    strcpy(artist[0].album[3].name, "In Blue");
    artist[0].album[3].years = 2000;

    strcpy(artist[0].album[4].name, "Borrowed Heaven");
    artist[0].album[4].years = 2004;

    strcpy(artist[0].album[0].FavSong[0], "AAAAAA"); // ตัวอย่างการ Assign ค่าสำหรับเพลงฮิตในอัลบั้ม 0
    strcpy(artist[0].album[0].FavSong[1], "BBBBBB");
    strcpy(artist[0].album[0].FavSong[2], "CCCCCC");

    artist[0].num_album = 5;

    //===================================Artist2===========================
    strcpy(artist[1].album[0].name, "Forgiven");
    artist[1].album[0].years = 19950;

    strcpy(artist[1].album[1].name, "Talk ");
    artist[1].album[1].years = 19980;

    strcpy(artist[1].album[2].name, "The Corrs");
    artist[1].album[2].years = 19990;

    strcpy(artist[1].album[3].name, "Blue");
    artist[1].album[3].years = 20000;

    strcpy(artist[1].album[4].name, "Heaven");
    artist[1].album[4].years = 20040;

    artist[1].num_album = 5;
    //===================================Artist3===========================
    strcpy(artist[2].album[0].name, "Forgiven, Not Forgotten");
    artist[2].album[0].years = 199500;

    strcpy(artist[2].album[1].name, "Talk On Corners");
    artist[2].album[1].years = 199800;

    strcpy(artist[2].album[2].name, "The Corrs Unplugged");
    artist[2].album[2].years = 199900;

    strcpy(artist[2].album[3].name, "In Blue");
    artist[2].album[3].years = 200000;

    strcpy(artist[2].album[4].name, "Borrowed Heaven");
    artist[2].album[4].years = 200400;

    artist[2].num_album = 5;
    //===================================Artist4===========================
    strcpy(artist[3].album[0].name, "Forgiven, Not Forgotten");
    artist[3].album[0].years = 1995000;

    strcpy(artist[3].album[1].name, "Talk On Corners");
    artist[3].album[1].years = 1998000;

    strcpy(artist[3].album[2].name, "The Corrs Unplugged");
    artist[3].album[2].years = 1999000;

    strcpy(artist[3].album[3].name, "In Blue");
    artist[3].album[3].years = 2000000;

    strcpy(artist[3].album[4].name, "Borrowed Heaven");
    artist[3].album[4].years = 2004000;

    artist[3].num_album = 5;
    //===================================Artist5===========================
    strcpy(artist[4].album[0].name, "Forgiven, Not Forgotten");
    artist[4].album[0].years = 19950000;

    strcpy(artist[4].album[1].name, "Talk On Corners");
    artist[4].album[1].years = 19980000;

    strcpy(artist[4].album[2].name, "The Corrs Unplugged");
    artist[4].album[2].years = 19990000;

    strcpy(artist[4].album[3].name, "In Blue");
    artist[4].album[3].years = 20000000;

    strcpy(artist[4].album[4].name, "Borrowed Heaven");
    artist[4].album[4].years = 20040000;

    artist[4].num_album = 5;

    for (int k = 0; k < 5; k++)
    {
        printf("\n-- Artist: %s --\n", artist[k].name);
        for (i = 0; i < artist[0].num_album; i++)
        {
            printf("\t album(%d): %s, %d\n",
                   i + 1,
                   artist[k].album[i].name,
                   artist[k].album[i].years);
        }
    }
    // ตัวอย่างการเรียกใช้งาน
    printf("---------------Fav Song------------\n");
    for (int l = 0; l < 3; l++)
        printf("TOP Hit Song No.%d is : %s \n", l + 1, artist[0].album[0].FavSong[l]); // ให้วนเอาค่า FavSong ออกมาแสดงผล
    return 0;
}