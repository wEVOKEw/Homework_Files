#include "input_time.h"

void input_time(int *h, int *m)
{
    int flag = 1;
    int time;

    printf("������Сʱ��");
    scanf("%d", h);
    printf("��������ӣ�");
    scanf("%d", m);

    //�ж�ʱ�������Ƿ���ȷ
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

    //������������һֱ��ʾ����������
    while (flag == 0)
    {
        printf("\n�����������������ʱ�䣺\n");
        printf("������Сʱ��");
        scanf("%d", h);
        printf("��������ӣ�");
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