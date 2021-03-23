#include "dfs_time.h"
#include "information_way.h"
#include "information_station.h"

//定义递归所用变量
int nowRoute[100];
int visited[197];
int num2[2], num3[3];
int nowLine[100];

//递归寻找路线
void dfs_time_recurrence(int s, int e, int (*m)[197], int amount, double cost, Way *dw, Station *ds, int *b1, int *a1, double *c1, int *b2, int *a2, double *c2, int *b3, int *a3, double *c3)
{
    int i;
    if (s == e)
    {
        //筛选最优的三条路线
        if (cost < (*c1))
        {
            for (i = 0; i < (*a2); i++)
            {
                b3[i] = b2[i];
            }
            (*a3) = (*a2);
            (*c3) = (*c2);

            for (i = 0; i < (*a1); i++)
            {
                b2[i] = b1[i];
            }
            (*a2) = (*a1);
            (*c2) = (*c1);

            for (i = 0; i < amount; i++)
            {
                b1[i] = nowRoute[i];
            }
            (*a1) = amount;
            (*c1) = cost;
        }

        else if ((cost >= (*c1)) && (cost < (*c2)))
        {
            for (i = 0; i < (*a2); i++)
            {
                b3[i] = b2[i];
            }
            (*a3) = (*a2);
            (*c3) = (*c2);

            for (i = 0; i < amount; i++)
            {
                b2[i] = nowRoute[i];
            }
            (*a2) = amount;
            (*c2) = cost;
        }

        else if ((cost >= (*c2)) && (cost < (*c3)))
        {
            for (i = 0; i < amount; i++)
            {
                b3[i] = nowRoute[i];
            }
            (*a3) = amount;
            (*c3) = cost;
        }
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
        if ((i != s) && (m[s][i] != 0) && (visited[i] == 0))
        {
            visited[i] = 1;
            nowRoute[amount] = i;
            nowLine[amount] = m[s][i];
            //依据是否换乘决定是否加减换乘时间
            if (amount == 1)
            {
                dfs_time_recurrence(i, e, m, amount + 1, cost + 3.0, dw, ds, b1, a1, c1, b2, a2, c2, b3, a3, c3);
            }
            else if ((amount > 1) && (nowLine[amount] == nowLine[amount - 1]))
            {
                dfs_time_recurrence(i, e, m, amount + 1, cost + 3.0, dw, ds, b1, a1, c1, b2, a2, c2, b3, a3, c3);
            }
            else if ((amount > 1) && (nowLine[amount] != nowLine[amount - 1]))
            {
                dfs_time_recurrence(i, e, m, amount + 1, cost + 6.5, dw, ds, b1, a1, c1, b2, a2, c2, b3, a3, c3);
            }
            visited[i] = 0;
        }
    }
}

void dfs_time(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197])
{
    nowRoute[0] = d_s_num;
    visited[d_s_num] = 1;
    int b1[100], b2[100], b3[100]; //存储最优三组解
    int a1, a2, a3;                //存储最优三组解的元素个数
    double c1 = 9999999.9;
    double c2 = 99999999.9;
    double c3 = 999999999.9;
    int i = 0;

    dfs_time_recurrence(d_s_num, d_e_num, m, 1, 0.0, d_w, d_s, b1, &a1, &c1, b2, &a2, &c2, b3, &a3, &c3);

    //输出三组最优解
    printf("花费时间最少的线路为：\n");
    for (i = 0; i < a1; i++)
    {
        if (i == 0)
            printf("%s", d_s[b1[i]].name);
        else
            printf(" -> %s", d_s[b1[i]].name);

        printf("(");
        if (d_s[b1[i]].flag == 0)
        {
            printf("%d", which_route(b1[i]));
        }
        else
        {
            if (d_s[b1[i]].flag == 2)
            {
                which_route_e(b1[i], num2);
                printf("%d,%d", num2[0], num2[1]);
            }
            else if (d_s[b1[i]].flag == 3)
            {
                which_route_e(b1[i], num3);
                printf("%d,%d,%d", num3[0], num3[1], num3[2]);
            }
        }
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c1);

    printf("花费时间第二少的线路为：\n");
    for (i = 0; i < a2; i++)
    {
        if (i == 0)
            printf("%s", d_s[b2[i]].name);
        else
            printf(" -> %s", d_s[b2[i]].name);

        printf("(");
        if (d_s[b2[i]].flag == 0)
        {
            printf("%d", which_route(b2[i]));
        }
        else
        {
            if (d_s[b2[i]].flag == 2)
            {
                which_route_e(b2[i], num2);
                printf("%d,%d", num2[0], num2[1]);
            }
            else if (d_s[b2[i]].flag == 3)
            {
                which_route_e(b2[i], num3);
                printf("%d,%d,%d", num3[0], num3[1], num3[2]);
            }
        }
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c2);

    printf("花费时间第三少的线路为：\n");
    for (i = 0; i < a3; i++)
    {
        if (i == 0)
            printf("%s", d_s[b3[i]].name);
        else
            printf(" -> %s", d_s[b3[i]].name);

        printf("(");
        if (d_s[b3[i]].flag == 0)
        {
            printf("%d", which_route(b3[i]));
        }
        else
        {
            if (d_s[b3[i]].flag == 2)
            {
                which_route_e(b3[i], num2);
                printf("%d,%d", num2[0], num2[1]);
            }
            else if (d_s[b3[i]].flag == 3)
            {
                which_route_e(b3[i], num3);
                printf("%d,%d,%d", num3[0], num3[1], num3[2]);
            }
        }
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c3);
}