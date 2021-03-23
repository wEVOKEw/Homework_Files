#include "list_station.h"

void list_station(int num, Way *w, Station *s)
{
    static int route1[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    static int route2[38] = {32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 19, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68};
    static int route3[24] = {37, 69, 70, 71, 72, 73, 74, 75, 76, 77, 43, 78, 79, 80, 13, 81, 82, 83, 84, 85, 86, 87, 88, 89};
    static int route4[37] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 51, 52, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 81, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123};
    static int route6[32] = {124, 2, 125, 126, 127, 128, 129, 130, 131, 40, 132, 133, 134, 135, 76, 136, 20, 47, 137, 138, 139, 140, 106, 141, 142, 143, 144, 145, 146, 147, 148, 88};
    static int route7[37] = {149, 150, 151, 152, 153, 154, 155, 156, 35, 157, 158, 130, 159, 160, 79, 44, 161, 76, 21, 162, 163, 164, 49, 165, 102, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177};
    static int route8[26] = {178, 37, 179, 180, 181, 74, 22, 162, 182, 183, 97, 184, 185, 186, 187, 188, 189, 54, 190, 191, 192, 193, 194, 170, 195, 196};

    int i = 0;

    //打印对应线路的站点
    switch (num)
    {
    case 1:
    {
        i = 0;
        printf("%s", s[route1[i]].name);

        for (i = 1; i < 32; i++)
        {
            printf(" -> %s", s[route1[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 2:
    {
        i = 0;
        printf("%s", s[route2[i]].name);

        for (i = 1; i < 38; i++)
        {
            printf(" -> %s", s[route2[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 3:
    {
        i = 0;
        printf("%s", s[route3[i]].name);

        for (i = 1; i < 24; i++)
        {
            printf(" -> %s", s[route3[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 4:
    {
        i = 0;
        printf("%s", s[route4[i]].name);

        for (i = 1; i < 37; i++)
        {
            printf(" -> %s", s[route4[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 6:
    {
        i = 0;
        printf("%s", s[route6[i]].name);

        for (i = 1; i < 32; i++)
        {
            printf(" -> %s", s[route6[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 7:
    {
        i = 0;
        printf("%s", s[route7[i]].name);

        for (i = 1; i < 37; i++)
        {
            printf(" -> %s", s[route7[i]].name);
        }

        printf("\n\n");

        break;
    }

    case 8:
    {
        i = 0;
        printf("%s", s[route8[i]].name);

        for (i = 1; i < 26; i++)
        {
            printf(" -> %s", s[route8[i]].name);
        }

        printf("\n\n");

        break;
    }
    }
}