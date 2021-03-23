#include "time_table.h"

void time_table(int num, Station *s, Way *w)
{
    int r;
    int order;
    int sub1, sub2;
    int h, m;
    int time;
    int i, j, count;
    int num2[2][2], num3[3][2];

    if (s[num].flag == 0) //该站点不能换乘
    {
        r = which_num(num, &order);

        switch (r)
        {
        case 1: //一号线上站点的时间表
        {
            printf("在1号线上：\n");
            if (order == 0)
            {
                printf("往汉口北方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往径河方向，在该站点车辆到站时间为：\n");
                time = (2 * 32 + 32 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 32)
            {
                printf("往汉口北方向，在该站点车辆到站时间为：\n");
                time = (2 * 32 + 32 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往径河方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往汉口北方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往径河方向，在该站点车辆到站时间为：\n");
                time = (2 * (32 - order) + (32 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 2: //二号线上站点的时间表
        {
            printf("在2号线上：\n");
            if (order == 0)
            {
                printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往天河机场方向，在该站点车辆到站时间为：\n");
                time = (2 * 38 + 38 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 38)
            {
                printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                time = (2 * 38 + 38 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往天河机场方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往天河机场方向，在该站点车辆到站时间为：\n");
                time = (2 * (38 - order) + (38 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 3: //三号线上站点的时间表
        {
            printf("在3号线上：\n");
            if (order == 0)
            {
                printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                time = (2 * 24 + 24 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 24)
            {
                printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                time = (2 * 24 + 24 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                time = (2 * (24 - order) + (24 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 4: //四号线上站点的时间表
        {
            printf("在4号线上：\n");
            if (order == 0)
            {
                printf("往柏林方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                time = (2 * 37 + 37 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 37)
            {
                printf("往柏林方向，在该站点车辆到站时间为：\n");
                time = (2 * 37 + 37 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往柏林方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                time = (2 * (37 - order) + (37 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 6: //六号线上站点的时间表
        {
            printf("在6号线上：\n");
            if (order == 0)
            {
                printf("往东风公司方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往富民南路方向，在该站点车辆到站时间为：\n");
                time = (2 * 32 + 32 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 32)
            {
                printf("往东风公司方向，在该站点车辆到站时间为：\n");
                time = (2 * 32 + 32 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往富民南路方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往东风公司方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往富民南路方向，在该站点车辆到站时间为：\n");
                time = (2 * (32 - order) + (32 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 7: //七号线上站点的时间表
        {
            printf("在7号线上：\n");
            if (order == 0)
            {
                printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                time = (2 * 37 + 37 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 37)
            {
                printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                time = (2 * 37 + 37 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                time = (2 * (37 - order) + (37 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }

        case 8: //八号线上站点的时间表
        {
            printf("在8号线上：\n");
            if (order == 0)
            {
                printf("往军运村方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往金潭路方向，在该站点车辆到站时间为：\n");
                time = (2 * 26 + 26 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else if (order == 26)
            {
                printf("往军运村方向，在该站点车辆到站时间为：\n");
                time = (2 * 26 + 26 - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往金潭路方向，在该站点车辆到站时间为：\n");
                time = 0;
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("往军运村方向，在该站点车辆到站时间为：\n");
                time = (2 * (order) + (order)-1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }

                printf("往金潭路方向，在该站点车辆到站时间为：\n");
                time = (2 * (26 - order) + (26 - order) - 1);
                count = 0;
                for (i = 0; time < (17 * 60); i++)
                {
                    h = 6;
                    m = 0;
                    m = m + time;
                    if (m >= 60)
                    {
                        h = h + (m / 60);
                        m = m % 60;
                    }
                    if (h >= 24)
                    {
                        h = h - 24;
                    }

                    if (m < 10)
                    {
                        printf("%d:0%d\t", h, m);
                    }
                    else
                    {
                        printf("%d:%d\t", h, m);
                    }

                    count++;
                    if ((count % 6) == 0)
                    {
                        printf("\n");
                    }

                    time += 7;
                }
                if ((count % 6) != 0)
                {
                    printf("\n");
                }
            }

            printf("\n");

            break;
        }
        }
    }

    else if (s[num].flag == 2) //该站点有两条线
    {
        which_e_num(num, num2);

        for (j = 0; j < 2; j++)
        {
            switch (num2[j][0])
            {
            case 1: //一号线上站点的时间表
            {
                printf("在1号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 32)
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = (2 * (32 - num2[j][1]) + (32 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 2: //二号线上站点的时间表
            {
                printf("在2号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = (2 * 38 + 38 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 38)
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = (2 * 38 + 38 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = (2 * (38 - num2[j][1]) + (38 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 3: //三号线上站点的时间表
            {
                printf("在3号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * 24 + 24 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 24)
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * 24 + 24 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * (24 - num2[j][1]) + (24 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 4: //四号线上站点的时间表
            {
                printf("在4号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 37)
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = (2 * (37 - num2[j][1]) + (37 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 6: //六号线上站点的时间表
            {
                printf("在6号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 32)
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = (2 * (32 - num2[j][1]) + (32 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 7: //七号线上站点的时间表
            {
                printf("在7号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 37)
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = (2 * (37 - num2[j][1]) + (37 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 8: //八号线上站点的时间表
            {
                printf("在8号线上：\n");
                if (num2[j][1] == 0)
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = (2 * 26 + 26 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num2[j][1] == 26)
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = (2 * 26 + 26 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num2[j][1]) + (num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = (2 * (26 - num2[j][1]) + (26 - num2[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }
            }
        }
    }

    else if (s[num].flag == 3) //该站点有三条线
    {
        which_e_num(num, num3);

        for (j = 0; j < 3; j++)
        {
            switch (num3[j][0])
            {
            case 1: //一号线上站点的时间表
            {
                printf("在1号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 32)
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往汉口北方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往径河方向，在该站点车辆到站时间为：\n");
                    time = (2 * (32 - num3[j][1]) + (32 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 2: //二号线上站点的时间表
            {
                printf("在2号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = (2 * 38 + 38 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 38)
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = (2 * 38 + 38 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往佛祖岭方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往天河机场方向，在该站点车辆到站时间为：\n");
                    time = (2 * (38 - num3[j][1]) + (38 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 3: //三号线上站点的时间表
            {
                printf("在3号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * 24 + 24 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 24)
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * 24 + 24 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往沌阳大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往宏图大道方向，在该站点车辆到站时间为：\n");
                    time = (2 * (24 - num3[j][1]) + (24 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 4: //四号线上站点的时间表
            {
                printf("在4号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 37)
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往柏林方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往武汉火车站方向，在该站点车辆到站时间为：\n");
                    time = (2 * (37 - num3[j][1]) + (37 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 6: //六号线上站点的时间表
            {
                printf("在6号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 32)
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = (2 * 32 + 32 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往东风公司方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往富民南路方向，在该站点车辆到站时间为：\n");
                    time = (2 * (32 - num3[j][1]) + (32 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 7: //七号线上站点的时间表
            {
                printf("在7号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 37)
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = (2 * 37 + 37 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往青龙山地铁小镇方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往黄陂广场方向，在该站点车辆到站时间为：\n");
                    time = (2 * (37 - num3[j][1]) + (37 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }

            case 8: //八号线上站点的时间表
            {
                printf("在8号线上：\n");
                if (num3[j][1] == 0)
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = (2 * 26 + 26 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else if (num3[j][1] == 26)
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = (2 * 26 + 26 - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = 0;
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf("往军运村方向，在该站点车辆到站时间为：\n");
                    time = (2 * (num3[j][1]) + (num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }

                    printf("往金潭路方向，在该站点车辆到站时间为：\n");
                    time = (2 * (26 - num3[j][1]) + (26 - num3[j][1]) - 1);
                    count = 0;
                    for (i = 0; time < (17 * 60); i++)
                    {
                        h = 6;
                        m = 0;
                        m = m + time;
                        if (m >= 60)
                        {
                            h = h + (m / 60);
                            m = m % 60;
                        }
                        if (h >= 24)
                        {
                            h = h - 24;
                        }

                        if (m < 10)
                        {
                            printf("%d:0%d\t", h, m);
                        }
                        else
                        {
                            printf("%d:%d\t", h, m);
                        }

                        count++;
                        if ((count % 6) == 0)
                        {
                            printf("\n");
                        }

                        time += 7;
                    }
                    if ((count % 6) != 0)
                    {
                        printf("\n");
                    }
                }

                printf("\n");

                break;
            }
            }
        }
    }
}