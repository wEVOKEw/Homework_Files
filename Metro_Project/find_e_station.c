#include "find_e_station.h"
#include "information_way.h"
#include <string.h>

int f_e(char *d_e_name, Station *d_s)
{
    int i = 0;
    for (i = 0; i < 197; i++)
    {
        if ((strcmp(d_s[i].name, d_e_name)) == 0)
        {
            break;
        }
    }
    return i;
}