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

    if (s[num].flag == 0) //��վ�㲻�ܻ���
    {
        r = which_num(num, &order);

        switch (r)
        {
        case 1: //һ������վ���ʱ���
        {
            printf("��1�����ϣ�\n");
            if (order == 0)
            {
                printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 2: //��������վ���ʱ���
        {
            printf("��2�����ϣ�\n");
            if (order == 0)
            {
                printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 3: //��������վ���ʱ���
        {
            printf("��3�����ϣ�\n");
            if (order == 0)
            {
                printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 4: //�ĺ�����վ���ʱ���
        {
            printf("��4�����ϣ�\n");
            if (order == 0)
            {
                printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 6: //��������վ���ʱ���
        {
            printf("��6�����ϣ�\n");
            if (order == 0)
            {
                printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 7: //�ߺ�����վ���ʱ���
        {
            printf("��7�����ϣ�\n");
            if (order == 0)
            {
                printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

        case 8: //�˺�����վ���ʱ���
        {
            printf("��8�����ϣ�\n");
            if (order == 0)
            {
                printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

    else if (s[num].flag == 2) //��վ����������
    {
        which_e_num(num, num2);

        for (j = 0; j < 2; j++)
        {
            switch (num2[j][0])
            {
            case 1: //һ������վ���ʱ���
            {
                printf("��1�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 2: //��������վ���ʱ���
            {
                printf("��2�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 3: //��������վ���ʱ���
            {
                printf("��3�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 4: //�ĺ�����վ���ʱ���
            {
                printf("��4�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 6: //��������վ���ʱ���
            {
                printf("��6�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 7: //�ߺ�����վ���ʱ���
            {
                printf("��7�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 8: //�˺�����վ���ʱ���
            {
                printf("��8�����ϣ�\n");
                if (num2[j][1] == 0)
                {
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

    else if (s[num].flag == 3) //��վ����������
    {
        which_e_num(num, num3);

        for (j = 0; j < 3; j++)
        {
            switch (num3[j][0])
            {
            case 1: //һ������վ���ʱ���
            {
                printf("��1�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ڱ������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("�����ӷ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 2: //��������վ���ʱ���
            {
                printf("��2�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�������뷽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ӻ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 3: //��������վ���ʱ���
            {
                printf("��3�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("��������������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����ͼ��������ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 4: //�ĺ�����վ���ʱ���
            {
                printf("��4�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����ַ����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("���人��վ�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 6: //��������վ���ʱ���
            {
                printf("��6�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����繫˾�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("��������·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 7: //�ߺ�����վ���ʱ���
            {
                printf("��7�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("������ɽ����С�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("������㳡�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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

            case 8: //�˺�����վ���ʱ���
            {
                printf("��8�����ϣ�\n");
                if (num3[j][1] == 0)
                {
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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
                    printf("�����˴巽���ڸ�վ�㳵����վʱ��Ϊ��\n");
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

                    printf("����̶·�����ڸ�վ�㳵����վʱ��Ϊ��\n");
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