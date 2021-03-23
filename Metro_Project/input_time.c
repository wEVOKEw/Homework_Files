#include "input_time.h"

void input_time(int *h, int *m)
{
    int flag = 1;
    int time;

    printf("请输入小时：");
    scanf("%d", h);
    printf("请输入分钟：");
    scanf("%d", m);

    //判断时间输入是否正确
    if (((*m) < 0) || ((*m) >= 60) || ((*h) < 0) || ((*h) >= 24))
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    if (((*h) >= 0) && ((*h) < 6))
    {
        time = ((24 + (*h)) * 60) + (*m);
        if (time > (17 * 60 + 110))
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 1;
    }

    //如果输入错误则一直提示并重新输入
    while (flag == 0)
    {
        printf("\n输入错误，请重新输入时间：\n");
        printf("请输入小时：");
        scanf("%d", h);
        printf("请输入分钟：");
        scanf("%d", m);

        if (((*m) < 0) || ((*m) >= 60) || ((*h) < 0) || ((*h) >= 24))
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }

        if (((*h) >= 0) && ((*h) < 6))
        {
            time = ((24 + (*h)) * 60) + (*m);
            if (time > (17 * 60 + 110))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
    }
}