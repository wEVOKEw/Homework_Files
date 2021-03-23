#include "find_s_station.h"
#include "information_station.h"
#include <string.h>

int f_s(char *d_s_name, Station *d_s)
{
    int i = 0;
    for (i = 0; i < 197; i++)
    {
        if ((strcmp(d_s[i].name, d_s_name)) == 0)
        {
            break;
        }
    }
    return i;
}