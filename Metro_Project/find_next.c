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
        printf("\n�ѵ��յ�վ��\n");
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

        //flagΪ1���ǻ���վ
        if (flag == 1)
        {
            while (flag == 1)
            {
                printf("��վ��Ϊ����վ�����Ƿ�Ҫѡ���������������1������������0��:");
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
                        printf("\n�ɻ��˵���·�У�%d , %d\n��ѡ�����·Ϊ��", num2[0], num2[1]);
                    }
                    else if (s[now_station].flag == 3)
                    {
                        which_route_e(now_station, num3);
                        printf("\n�ɻ��˵���·�У�%d , %d , %d\n��ѡ�����·Ϊ��", num3[0], num3[1], num3[2]);
                    }
                    scanf("%d", &route);

                    printf("������鿴�ķ�������1Ϊ��ǰ�鿴������2Ϊ���鿴����");
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
                        printf("\n�ѵ��յ�վ��\n");
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

        //flagΪ0��Ϊ����վ
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
                    printf("\n�ѵ��յ�վ��\n");
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