#include "change_crowd.h"

void change_crowd(int (*cl)[8])
{
    //��ʾ����ʱ��μ����Ӧ��ӵ����
    printf("Ŀǰ�ϰ�ʱ��Σ�");
    if (cl[0][1] < 10)
    {
        printf("%d��0%d", cl[0][0], cl[0][1]);
    }
    else
    {
        printf("%d��%d", cl[0][0], cl[0][1]);
    }
    printf(" ~ ");
    if (cl[0][3] < 10)
    {
        printf("%d��0%d\t", cl[0][2], cl[0][3]);
    }
    else
    {
        printf("%d��%d\t", cl[0][2], cl[0][3]);
    }
    printf("ӵ����Ϊ��%d%%", cl[0][4]);
    printf("\n");

    printf("Ŀǰ�°�ʱ��Σ�");
    if (cl[1][1] < 10)
    {
        printf("%d��0%d", cl[1][0], cl[1][1]);
    }
    else
    {
        printf("%d��%d", cl[1][0], cl[1][1]);
    }
    printf(" ~ ");
    if (cl[1][3] < 10)
    {
        printf("%d��0%d\t", cl[1][2], cl[1][3]);
    }
    else
    {
        printf("%d��%d\t", cl[1][2], cl[1][3]);
    }
    printf("ӵ����Ϊ��%d%%", cl[1][4]);
    printf("\n");

    printf("���°�����ʱ���ӵ���ȣ�%d%%\n\n", cl[0][7]);

    printf("Ŀǰ����ʱ��Σ�");
    if (cl[2][1] < 10)
    {
        printf("%d��0%d", cl[2][0], cl[2][1]);
    }
    else
    {
        printf("%d��%d", cl[2][0], cl[2][1]);
    }
    printf(" ~ ");
    if (cl[2][3] < 10)
    {
        printf("%d��0%d\t", cl[2][2], cl[2][3]);
    }
    else
    {
        printf("%d��%d\t", cl[2][2], cl[2][3]);
    }
    printf("ӵ����Ϊ��%d%%", cl[2][4]);
    printf("\n");

    printf("��������ʱ���ӵ���ȣ�%d%%\n\n", cl[2][7]);

    printf("Ŀǰ����ʱ��Σ�");
    if (cl[3][1] < 10)
    {
        printf("%d��0%d", cl[3][0], cl[3][1]);
    }
    else
    {
        printf("%d��%d", cl[3][0], cl[3][1]);
    }
    printf(" ~ ");
    if (cl[3][3] < 10)
    {
        printf("%d��0%d\t", cl[3][2], cl[3][3]);
    }
    else
    {
        printf("%d��%d\t", cl[3][2], cl[3][3]);
    }
    printf("ӵ����Ϊ��%d%%", cl[3][4]);
    printf("\n");

    printf("��������ʱ���ӵ���ȣ�%d%%\n\n", cl[3][7]);

    printf("ȫ���ӵ���ȣ�%d%%\n\n", cl[4][0]);

    int flag = 1; //�ж�ѭ���Ƿ����
    int op;       //����ѡ��ѡ��ı���

    while (flag)
    {
        printf("���޸ĵ�ʱ��μ�ӵ�������£�\n");
        printf("1�����°�ʱ���\t2������ʱ���\n3������ʱ���\t4��ȫ���\n");

        printf("��ѡ����Ҫ�޸ĵ�ʱ��Σ�");
        scanf("%d", &op);

        switch (op)
        {
        case 1: //�޸����°��ʱ��λ���ӵ����
        {
            printf("�޸ĺ��ϰ���ʼʱ��Ϊ��\n");
            input_time(&cl[0][0], &cl[0][1]);
            printf("�޸ĺ��ϰ����ʱ��Ϊ��\n");
            input_time(&cl[0][2], &cl[0][3]);
            cl[0][5] = ((cl[0][0] - 6) * 60) + cl[0][1]; //����ʱ��ο�ʼʱ��
            cl[0][6] = ((cl[0][2] - 6) * 60) + cl[0][3]; //����ʱ��ν���ʱ��
            printf("�޸ĵ��ϰ�ӵ���̶�Ϊ��");
            scanf("%d", &cl[0][4]);

            printf("�޸ĵ��°���ʼʱ��Ϊ��\n");
            input_time(&cl[1][0], &cl[1][1]);
            printf("�޸ĵ��°����ʱ��Ϊ��\n");
            input_time(&cl[1][2], &cl[1][3]);
            cl[1][5] = ((cl[1][0] - 6) * 60) + cl[1][1]; //����ʱ��ο�ʼʱ��
            cl[1][6] = ((cl[1][2] - 6) * 60) + cl[1][3]; //����ʱ��ν���ʱ��
            printf("�޸ĵ��°�ӵ���̶�Ϊ��");
            scanf("%d", &cl[1][4]);

            printf("�޸ĵ����°���ӵ����Ϊ��");
            scanf("%d", &cl[0][7]);

            break;
        }

        case 2: //�޸Ĺ����ʱ��λ���ӵ����
        {
            printf("�޸ĵĹ���ʱ��Ϊ��\n");
            input_time(&cl[2][0], &cl[2][1]);
            printf("�޸ĵĹ���ʱ��Ϊ��\n");
            input_time(&cl[2][2], &cl[2][3]);
            cl[2][5] = ((cl[2][0] - 6) * 60) + cl[2][1]; //����ʱ��ο�ʼʱ��
            cl[2][6] = ((cl[2][2] - 6) * 60) + cl[2][3]; //����ʱ��ν���ʱ��
            printf("�޸ĵĹ���ӵ���̶�Ϊ��");
            scanf("%d", &cl[2][4]);

            printf("�޸ĵĹ�����ӵ����Ϊ��");
            scanf("%d", &cl[2][7]);

            break;
        }

        case 3: //�޸����ֵ�ʱ��λ���ӵ����
        {
            printf("�޸ĵ�����ʱ��Ϊ��\n");
            input_time(&cl[3][0], &cl[3][1]);
            printf("�޸ĵ�����ʱ��Ϊ��\n");
            input_time(&cl[3][2], &cl[3][3]);
            cl[3][5] = ((cl[3][0] - 6) * 60) + cl[3][1]; //����ʱ��ο�ʼʱ��
            cl[3][6] = ((cl[3][2] - 6) * 60) + cl[3][3]; //����ʱ��ν���ʱ��
            printf("�޸ĵ�����ӵ���̶�Ϊ��");
            scanf("%d", &cl[3][4]);

            printf("�޸ĵ�������ӵ����Ϊ��");
            scanf("%d", &cl[3][7]);

            break;
        }

        case 4: //�޸�ȫ���ӵ����
        {
            printf("�޸ĵ�ȫ���ӵ����Ϊ��");
            scanf("%d", &cl[4][0]);

            break;
        }
        }

        //��ʾ�޸ĺ��ʱ��
        printf("\nĿǰ�ϰ�ʱ��Σ�");
        if (cl[0][1] < 10)
        {
            printf("%d��0%d", cl[0][0], cl[0][1]);
        }
        else
        {
            printf("%d��%d", cl[0][0], cl[0][1]);
        }
        printf(" ~ ");
        if (cl[0][3] < 10)
        {
            printf("%d��0%d\t", cl[0][2], cl[0][3]);
        }
        else
        {
            printf("%d��%d\t", cl[0][2], cl[0][3]);
        }
        printf("ӵ����Ϊ��%d%%", cl[0][4]);
        printf("\n");

        printf("Ŀǰ�°�ʱ��Σ�");
        if (cl[1][1] < 10)
        {
            printf("%d��0%d", cl[1][0], cl[1][1]);
        }
        else
        {
            printf("%d��%d", cl[1][0], cl[1][1]);
        }
        printf(" ~ ");
        if (cl[1][3] < 10)
        {
            printf("%d��0%d\t", cl[1][2], cl[1][3]);
        }
        else
        {
            printf("%d��%d\t", cl[1][2], cl[1][3]);
        }
        printf("ӵ����Ϊ��%d%%", cl[1][4]);
        printf("\n");

        printf("���°�����ʱ���ӵ���ȣ�%d%%\n\n", cl[0][7]);

        printf("Ŀǰ����ʱ��Σ�");
        if (cl[2][1] < 10)
        {
            printf("%d��0%d", cl[2][0], cl[2][1]);
        }
        else
        {
            printf("%d��%d", cl[2][0], cl[2][1]);
        }
        printf(" ~ ");
        if (cl[2][3] < 10)
        {
            printf("%d��0%d\t", cl[2][2], cl[2][3]);
        }
        else
        {
            printf("%d��%d\t", cl[2][2], cl[2][3]);
        }
        printf("ӵ����Ϊ��%d%%", cl[2][4]);
        printf("\n");

        printf("��������ʱ���ӵ���ȣ�%d%%\n\n", cl[2][7]);

        printf("Ŀǰ����ʱ��Σ�");
        if (cl[3][1] < 10)
        {
            printf("%d��0%d", cl[3][0], cl[3][1]);
        }
        else
        {
            printf("%d��%d", cl[3][0], cl[3][1]);
        }
        printf(" ~ ");
        if (cl[3][3] < 10)
        {
            printf("%d��0%d\t", cl[3][2], cl[3][3]);
        }
        else
        {
            printf("%d��%d\t", cl[3][2], cl[3][3]);
        }
        printf("ӵ����Ϊ��%d%%", cl[3][4]);
        printf("\n");

        printf("��������ʱ���ӵ���ȣ�%d%%\n\n", cl[3][7]);

        printf("ȫ���ӵ���ȣ�%d%%\n\n", cl[4][0]);

        //�û������׶Σ��Ƿ������ѯ
        printf("�Ƿ�Ҫ�����޸ģ�\n��������1����������0.\n");
        printf("�����������");
        scanf("%d", &flag);
    }
}