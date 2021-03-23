#include "dfs_weight_crowd.h"
#include "information_way.h"
#include "information_station.h"

//定义递归所用变量
int nowRoute[100];
int visited[197];
int num2[2], num3[3];
int nowLine[100];
int nowW[100];
double nowWt[100];
int nowTime;
int line;
double rw;
int c_n;
int flag = 0;

void dfs_weight_crowd_recurrence(int st, int s, int e, int (*m)[197], int (*crd)[8], int amount, double cost, Way *dw, Station *ds, int *b1, int *a1, double *c1, int *w1, double *wt1, int *b2, int *a2, double *c2, int *w2, double *wt2, int *b3, int *a3, double *c3, int *w3, double *wt3, double wt, int *nowW)
{
    int i;
    if (s == e)
    {
        nowW[0] = 0;

        //筛选拥挤度较低的最优三组路线
        if (flag < 3)
        {
            if ((wt) < wt1[(*a1) - 1])
            {
                for (i = 0; i < (*a2); i++)
                {
                    b3[i] = b2[i];
                    wt3[i] = wt2[i];
                    w3[i] = w2[i];
                }
                (*a3) = (*a2);
                (*c3) = (*c2);

                for (i = 0; i < (*a1); i++)
                {
                    b2[i] = b1[i];
                    wt2[i] = wt1[i];
                    w2[i] = w1[i];
                }
                (*a2) = (*a1);
                (*c2) = (*c1);

                for (i = 0; i < amount; i++)
                {
                    b1[i] = nowRoute[i];
                    wt1[i] = nowWt[i];
                    w1[i] = nowW[i];
                }
                (*a1) = amount;
                (*c1) = cost;
            }

            else if (((wt) >= wt1[(*a1) - 1]) && ((wt) < wt2[(*a2) - 1]))
            {
                for (i = 0; i < (*a2); i++)
                {
                    b3[i] = b2[i];
                    wt3[i] = wt2[i];
                    w3[i] = w2[i];
                }
                (*a3) = (*a2);
                (*c3) = (*c2);

                for (i = 0; i < amount; i++)
                {
                    b2[i] = nowRoute[i];
                    wt2[i] = nowWt[i];
                    w2[i] = nowW[i];
                }
                (*a2) = amount;
                (*c2) = cost;
            }

            else if (((wt) >= wt2[(*a2) - 1]) && ((wt) < wt3[(*a3) - 1]))
            {
                for (i = 0; i < amount; i++)
                {
                    b3[i] = nowRoute[i];
                    wt3[i] = nowWt[i];
                    w3[i] = nowW[i];
                }
                (*a3) = amount;
                (*c3) = cost;
            }
        }

        flag = 0;
    }

    for (i = 0; i < 197; i++)
    {
        if ((i != s) && (m[s][i] != 0) && (visited[i] == 0))
        {
            visited[i] = 1;
            nowRoute[amount] = i;
            nowLine[amount] = m[s][i];
            line = m[s][i];

            if (amount == 1)
            {
                nowTime = st + ((int)(cost + 3.0));
                rw = (2.0 * (return_weight(nowTime, crd, line, &c_n)) + 1.0);
                nowWt[amount] = wt + rw;
                nowW[amount] = c_n;

                if (c_n >= 75)
                {
                    flag++;
                }

                dfs_weight_crowd_recurrence(st, i, e, m, crd, amount + 1, cost + 3.0, dw, ds, b1, a1, c1, w1, wt1, b2, a2, c2, w2, wt2, b3, a3, c3, w3, wt3, (wt + rw), nowW);
            }
            else if ((amount > 1) && (nowLine[amount] == nowLine[amount - 1]))
            {
                nowTime = st + ((int)(cost + 3.0));
                rw = (2.0 * (return_weight(nowTime, crd, line, &c_n)) + 1.0);
                nowWt[amount] = wt + rw;
                nowW[amount] = c_n;

                if (c_n >= 75)
                {
                    flag++;
                }

                dfs_weight_crowd_recurrence(st, i, e, m, crd, amount + 1, cost + 3.0, dw, ds, b1, a1, c1, w1, wt1, b2, a2, c2, w2, wt2, b3, a3, c3, w3, wt3, (wt + rw), nowW);
            }
            else if ((amount > 1) && (nowLine[amount] != nowLine[amount - 1]))
            {
                nowTime = st + ((int)(cost + 6.5));
                rw = (2.0 * (return_weight(nowTime, crd, line, &c_n)) + 1.0 + 3.5);
                nowWt[amount] = wt + rw;
                nowW[amount] = c_n;

                if (c_n >= 75)
                {
                    flag++;
                }

                dfs_weight_crowd_recurrence(st, i, e, m, crd, amount + 1, cost + 6.5, dw, ds, b1, a1, c1, w1, wt1, b2, a2, c2, w2, wt2, b3, a3, c3, w3, wt3, (wt + rw), nowW);
            }
            visited[i] = 0;
        }
    }
}

void dfs_weight_crowd(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197], int (*crd)[8], int st)
{
    nowRoute[0] = d_s_num;
    nowWt[0] = 0;
    nowW[0] = 0;
    visited[d_s_num] = 1;
    int b1[100], b2[100], b3[100];       //存放最优解站点序号
    int a1, a2, a3;                      //存放最优解中站点个数
    int w1[100], w2[100], w3[100];       //存放最优解拥挤度
    double wt1[100], wt2[100], wt3[100]; //存放最优解当前加权时间
    double c1, c2, c3;
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        wt1[i] = 99999999.9;
        wt2[i] = 999999999.9;
        wt3[i] = 9999999999.9;
    }

    dfs_weight_crowd_recurrence(st, d_s_num, d_e_num, m, crd, 1, 0.0, d_w, d_s, b1, &a1, &c1, w1, wt1, b2, &a2, &c2, w2, wt2, b3, &a3, &c3, w3, wt3, 0, nowW);

    //输出最优三组解
    printf("考虑避免拥挤时：\n");
    printf("加权时间最少的线路为：\n");
    for (i = 0; i < a1; i++)
    {
        if (i == 0)
            printf("%s", d_s[b1[i]].name);
        else
            printf(" -> %s", d_s[b1[i]].name);

        printf("(");
        printf("%.1f", wt1[i]);
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c1);

    printf("加权时间第二少的线路为：\n");
    for (i = 0; i < a2; i++)
    {
        if (i == 0)
            printf("%s", d_s[b2[i]].name);
        else
            printf(" -> %s", d_s[b2[i]].name);

        printf("(");
        printf("%.1f", wt2[i]);
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c2);

    printf("加权时间第三少的线路为：\n");
    for (i = 0; i < a3; i++)
    {
        if (i == 0)
            printf("%s", d_s[b3[i]].name);
        else
            printf(" -> %s", d_s[b3[i]].name);

        printf("(");
        printf("%.1f", wt3[i]);
        printf(")");
    }
    printf("\n花费的时间为：%.1f分钟\n\n", c3);
}