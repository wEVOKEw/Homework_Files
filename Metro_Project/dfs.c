#include "dfs.h"
#include "information_way.h"
#include "information_station.h"

//定义递归所用变量
int nowRoute[100];
int visited[197];
int num2[2], num3[3];

void dfs_recurrence(int s, int e, int (*m)[197], int amount, Way *dw, Station *ds)
{
    int i;
    if (s == e)
    {
        /*for (i = 0; i < amount; i++)
        {
            if (i == 0)
                printf("%s", ds[nowRoute[i]].name);
            else
                printf(" -> %s", ds[nowRoute[i]].name);

            printf("(");
            if (ds[nowRoute[i]].flag == 0)
            {
                printf("%d", which_route(nowRoute[i]));
            }
            else
            {
                if (ds[nowRoute[i]].flag == 2)
                {
                    which_route_e(nowRoute[i], num2);
                    printf("%d,%d", num2[0], num2[1]);
                }
                else if (ds[nowRoute[i]].flag == 3)
                {
                    which_route_e(nowRoute[i], num3);
                    printf("%d,%d,%d", num3[0], num3[1], num3[2]);
                }
            }
            printf(")");
        }
        printf("\n\n");*/
    }

    for (i = 0; i < 197; i++)
    {
        if ((i != s) && (m[s][i] == 1) && (visited[i] == 0))
        {
            visited[i] = 1;
            nowRoute[amount] = i;
            dfs_recurrence(i, e, m, amount + 1, dw, ds);
            visited[i] = 0;
        }
    }
}

void dfs(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197])
{
    nowRoute[0] = d_s_num;
    visited[d_s_num] = 1;

    dfs_recurrence(d_s_num, d_e_num, m, 1, d_w, d_s);
}