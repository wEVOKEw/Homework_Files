#include "refresh.h"
#include "information_way.h"
#include "information_station.h"

void refresh(Way *rf_w, Station *rf_s)
{
    int i = 0;

    for (i = 0; i < 219; i++)
    {
        rf_w[i].visited = 0;
    }

    for (i = 0; i < 197; i++)
    {
        rf_s[i].visited = 0;
    }
}