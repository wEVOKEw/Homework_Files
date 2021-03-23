#include "return_weight.h"

double return_weight(int nowTime, int (*crd)[8], int nowLine, int *w)
{
    switch (nowLine)
    {
    case 1:
    {
        if ((nowTime >= crd[0][5]) && (nowTime <= crd[0][6]))
        {
            *w = crd[0][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else if ((nowTime >= crd[1][5]) && (nowTime <= crd[1][6]))
        {
            *w = crd[1][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else
        {
            *w = crd[0][7];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }

        break;
    }

    case 2:
    {
        *w = crd[4][0];
        if (((*w) >= 0) && ((*w) <= 20))
        {
            return 0.6;
        }
        else if (((*w) > 20) && ((*w) < 75))
        {
            return 1;
        }
        else if ((*w) >= 75)
        {
            return 1.5;
        }

        break;
    }

    case 3:
    {
        if ((nowTime >= crd[0][5]) && (nowTime <= crd[0][6]))
        {
            *w = crd[0][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else if ((nowTime >= crd[1][5]) && (nowTime <= crd[1][6]))
        {
            *w = crd[1][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else
        {
            *w = crd[0][7];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }

        break;
    }

    case 4:
    {
        *w = crd[4][0];
        if (((*w) >= 0) && ((*w) <= 20))
        {
            return 0.6;
        }
        else if (((*w) > 20) && ((*w) < 75))
        {
            return 1;
        }
        else if ((*w) >= 75)
        {
            return 1.5;
        }

        break;
    }

    case 6:
    {
        if ((nowTime >= crd[3][5]) && (nowTime <= crd[3][6]))
        {
            *w = crd[3][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else
        {
            *w = crd[3][7];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }

        break;
    }

    case 7:
    {
        if ((nowTime >= crd[3][5]) && (nowTime <= crd[3][6]))
        {
            *w = crd[3][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else
        {
            *w = crd[3][7];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }

        break;
    }

    case 8:
    {
        if ((nowTime >= crd[2][5]) && (nowTime <= crd[2][6]))
        {
            *w = crd[2][4];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }
        else
        {
            *w = crd[2][7];
            if (((*w) >= 0) && ((*w) <= 20))
            {
                return 0.6;
            }
            else if (((*w) > 20) && ((*w) < 75))
            {
                return 1;
            }
            else if ((*w) >= 75)
            {
                return 1.5;
            }
        }

        break;
    }
    }
}