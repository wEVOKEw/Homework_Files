#include "find_next.h"

int find_next(int num, int dirc, int (*m)[197], Station *s, Way *w, int route)
{
    int flag = 0;
    int op = 1;
    int i = 0, j = 0;
    int now_station, last_station;
    int num2[2], num3[3];

    now_station = num;

    printf("\n%s", s[now_station].name);
    for (i = 0; i < 197; i++)
    {
        if (m[now_station][i] != 0)
        {
            for (j = 0; j < 219; j++)
            {
                if (((w[j].aStation[0] == now_station) && (w[j].aStation[1] == i)) || ((w[j].aStation[1] == now_station) && (w[j].aStation[0] == i)))
                {
                    break;
                }
            }
            if ((m[now_station][i] == dirc) && (w[j].route == route))
            {
                last_station = now_station;
                now_station = i;
                break;
            }
        }
    }
    if (i == 197)
    {
        printf("\n已到终点站。\n");
        return 1;
    }

    printf(" -> %s\n", s[now_station].name);

    while (op)
    {
        if (s[now_station].flag != 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }

        //flag为1则是换乘站
        if (flag == 1)
        {
            while (flag == 1)
            {
                printf("该站点为换乘站，你是否要选择继续（是请输入1，不是请输入0）:");
                scanf("%d", &op);
                if (op == 0)
                {
                    break;
                }
                else
                {
                    if (s[now_station].flag == 2)
                    {
                        which_route_e(now_station, num2);
                        printf("\n可换乘的线路有：%d , %d\n你选择的线路为：", num2[0], num2[1]);
                    }
                    else if (s[now_station].flag == 3)
                    {
                        which_route_e(now_station, num3);
                        printf("\n可换乘的线路有：%d , %d , %d\n你选择的线路为：", num3[0], num3[1], num3[2]);
                    }
                    scanf("%d", &route);

                    printf("请输入查看的方向（输入1为向前查看，输入2为向后查看）：");
                    scanf("%d", &dirc);
                    printf("\n");

                    printf("%s", s[now_station].name);
                    for (i = 0; i < 197; i++)
                    {
                        if (m[now_station][i] != 0)
                        {
                            for (j = 0; j < 219; j++)
                            {
                                if (((w[j].aStation[0] == now_station) && (w[j].aStation[1] == i)) || ((w[j].aStation[1] == now_station) && (w[j].aStation[0] == i)))
                                {
                                    break;
                                }
                            }
                            if ((m[now_station][i] == dirc) && (w[j].route == route))
                            {
                                last_station = now_station;
                                now_station = i;
                                break;
                            }
                        }
                    }
                    if (i == 197)
                    {
                        printf("\n已到终点站。\n");
                        return 1;
                    }

                                        if (s[now_station].flag != 0)
                    {
                        printf(" -> %s\n", s[now_station].name);
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
            }
        }

        //flag为0不为换乘站
        if (flag == 0)
        {
            while (flag == 0)
            {
                printf(" -> %s", s[now_station].name);
                for (i = 0; i < 197; i++)
                {
                    if (m[now_station][i] != 0)
                    {
                        for (j = 0; j < 219; j++)
                        {
                            if (((w[j].aStation[0] == now_station) && (w[j].aStation[1] == i)) || ((w[j].aStation[1] == now_station) && (w[j].aStation[0] == i)))
                            {
                                break;
                            }
                        }
                        if ((m[now_station][i] == dirc) && (w[j].route == route))
                        {
                            last_station = now_station;
                            now_station = i;
                            break;
                        }
                    }
                }
                if (i == 197)
                {
                    printf("\n已到终点站。\n");
                    return 1;
                }

                if (s[now_station].flag != 0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
        }
    }
}