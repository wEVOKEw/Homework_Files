#include "money.h"

double money(double distance)
{
    if (distance < 0)
    {
        return 0;
    }
    else if (distance <= 4 && distance > 0)
    {
        return 2;
    }
    else if (distance > 4 && distance <= 12)
    {
        return 2 + ((distance - 4) / 4);
    }
    else if (distance > 12 && distance <= 24)
    {
        return 4 + (distance - 12) / 6;
    }
    else if (distance > 24 && distance <= 40)
    {
        return 6 + (distance - 24) / 8;
    }
    else if (distance > 40 && distance <= 50)
    {
        return 8 + (distance - 40) / 10;
    }
    else
    {
        return 9 + (distance - 50) / 20;
    }
}