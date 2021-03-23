#include "change_crowd.h"

void change_crowd(int (*cl)[8])
{
    //显示所有时间段及其对应的拥挤度
    printf("目前上班时间段：");
    if (cl[0][1] < 10)
    {
        printf("%d：0%d", cl[0][0], cl[0][1]);
    }
    else
    {
        printf("%d：%d", cl[0][0], cl[0][1]);
    }
    printf(" ~ ");
    if (cl[0][3] < 10)
    {
        printf("%d：0%d\t", cl[0][2], cl[0][3]);
    }
    else
    {
        printf("%d：%d\t", cl[0][2], cl[0][3]);
    }
    printf("拥挤度为：%d%%", cl[0][4]);
    printf("\n");

    printf("目前下班时间段：");
    if (cl[1][1] < 10)
    {
        printf("%d：0%d", cl[1][0], cl[1][1]);
    }
    else
    {
        printf("%d：%d", cl[1][0], cl[1][1]);
    }
    printf(" ~ ");
    if (cl[1][3] < 10)
    {
        printf("%d：0%d\t", cl[1][2], cl[1][3]);
    }
    else
    {
        printf("%d：%d\t", cl[1][2], cl[1][3]);
    }
    printf("拥挤度为：%d%%", cl[1][4]);
    printf("\n");

    printf("上下班其余时间段拥挤度：%d%%\n\n", cl[0][7]);

    printf("目前购物时间段：");
    if (cl[2][1] < 10)
    {
        printf("%d：0%d", cl[2][0], cl[2][1]);
    }
    else
    {
        printf("%d：%d", cl[2][0], cl[2][1]);
    }
    printf(" ~ ");
    if (cl[2][3] < 10)
    {
        printf("%d：0%d\t", cl[2][2], cl[2][3]);
    }
    else
    {
        printf("%d：%d\t", cl[2][2], cl[2][3]);
    }
    printf("拥挤度为：%d%%", cl[2][4]);
    printf("\n");

    printf("购物其余时间段拥挤度：%d%%\n\n", cl[2][7]);

    printf("目前娱乐时间段：");
    if (cl[3][1] < 10)
    {
        printf("%d：0%d", cl[3][0], cl[3][1]);
    }
    else
    {
        printf("%d：%d", cl[3][0], cl[3][1]);
    }
    printf(" ~ ");
    if (cl[3][3] < 10)
    {
        printf("%d：0%d\t", cl[3][2], cl[3][3]);
    }
    else
    {
        printf("%d：%d\t", cl[3][2], cl[3][3]);
    }
    printf("拥挤度为：%d%%", cl[3][4]);
    printf("\n");

    printf("娱乐其余时间段拥挤度：%d%%\n\n", cl[3][7]);

    printf("全天际拥挤度：%d%%\n\n", cl[4][0]);

    int flag = 1; //判断循环是否继续
    int op;       //储存选择选项的变量

    while (flag)
    {
        printf("可修改的时间段及拥挤度如下：\n");
        printf("1、上下班时间段\t2、购物时间段\n3、娱乐时间段\t4、全天际\n");

        printf("请选择你要修改的时间段：");
        scanf("%d", &op);

        switch (op)
        {
        case 1: //修改上下班的时间段或者拥挤度
        {
            printf("修改后上班起始时间为：\n");
            input_time(&cl[0][0], &cl[0][1]);
            printf("修改后上班结束时间为：\n");
            input_time(&cl[0][2], &cl[0][3]);
            cl[0][5] = ((cl[0][0] - 6) * 60) + cl[0][1]; //设置时间段开始时间
            cl[0][6] = ((cl[0][2] - 6) * 60) + cl[0][3]; //设置时间段结束时间
            printf("修改的上班拥挤程度为：");
            scanf("%d", &cl[0][4]);

            printf("修改的下班起始时间为：\n");
            input_time(&cl[1][0], &cl[1][1]);
            printf("修改的下班结束时间为：\n");
            input_time(&cl[1][2], &cl[1][3]);
            cl[1][5] = ((cl[1][0] - 6) * 60) + cl[1][1]; //设置时间段开始时间
            cl[1][6] = ((cl[1][2] - 6) * 60) + cl[1][3]; //设置时间段结束时间
            printf("修改的下班拥挤程度为：");
            scanf("%d", &cl[1][4]);

            printf("修改的上下班外拥挤度为：");
            scanf("%d", &cl[0][7]);

            break;
        }

        case 2: //修改购物的时间段或者拥挤度
        {
            printf("修改的购物时间为：\n");
            input_time(&cl[2][0], &cl[2][1]);
            printf("修改的购物时间为：\n");
            input_time(&cl[2][2], &cl[2][3]);
            cl[2][5] = ((cl[2][0] - 6) * 60) + cl[2][1]; //设置时间段开始时间
            cl[2][6] = ((cl[2][2] - 6) * 60) + cl[2][3]; //设置时间段结束时间
            printf("修改的购物拥挤程度为：");
            scanf("%d", &cl[2][4]);

            printf("修改的购物外拥挤度为：");
            scanf("%d", &cl[2][7]);

            break;
        }

        case 3: //修改娱乐的时间段或者拥挤度
        {
            printf("修改的娱乐时间为：\n");
            input_time(&cl[3][0], &cl[3][1]);
            printf("修改的娱乐时间为：\n");
            input_time(&cl[3][2], &cl[3][3]);
            cl[3][5] = ((cl[3][0] - 6) * 60) + cl[3][1]; //设置时间段开始时间
            cl[3][6] = ((cl[3][2] - 6) * 60) + cl[3][3]; //设置时间段结束时间
            printf("修改的娱乐拥挤程度为：");
            scanf("%d", &cl[3][4]);

            printf("修改的娱乐外拥挤度为：");
            scanf("%d", &cl[3][7]);

            break;
        }

        case 4: //修改全天际拥挤度
        {
            printf("修改的全天际拥挤度为：");
            scanf("%d", &cl[4][0]);

            break;
        }
        }

        //显示修改后的时间
        printf("\n目前上班时间段：");
        if (cl[0][1] < 10)
        {
            printf("%d：0%d", cl[0][0], cl[0][1]);
        }
        else
        {
            printf("%d：%d", cl[0][0], cl[0][1]);
        }
        printf(" ~ ");
        if (cl[0][3] < 10)
        {
            printf("%d：0%d\t", cl[0][2], cl[0][3]);
        }
        else
        {
            printf("%d：%d\t", cl[0][2], cl[0][3]);
        }
        printf("拥挤度为：%d%%", cl[0][4]);
        printf("\n");

        printf("目前下班时间段：");
        if (cl[1][1] < 10)
        {
            printf("%d：0%d", cl[1][0], cl[1][1]);
        }
        else
        {
            printf("%d：%d", cl[1][0], cl[1][1]);
        }
        printf(" ~ ");
        if (cl[1][3] < 10)
        {
            printf("%d：0%d\t", cl[1][2], cl[1][3]);
        }
        else
        {
            printf("%d：%d\t", cl[1][2], cl[1][3]);
        }
        printf("拥挤度为：%d%%", cl[1][4]);
        printf("\n");

        printf("上下班其余时间段拥挤度：%d%%\n\n", cl[0][7]);

        printf("目前购物时间段：");
        if (cl[2][1] < 10)
        {
            printf("%d：0%d", cl[2][0], cl[2][1]);
        }
        else
        {
            printf("%d：%d", cl[2][0], cl[2][1]);
        }
        printf(" ~ ");
        if (cl[2][3] < 10)
        {
            printf("%d：0%d\t", cl[2][2], cl[2][3]);
        }
        else
        {
            printf("%d：%d\t", cl[2][2], cl[2][3]);
        }
        printf("拥挤度为：%d%%", cl[2][4]);
        printf("\n");

        printf("购物其余时间段拥挤度：%d%%\n\n", cl[2][7]);

        printf("目前娱乐时间段：");
        if (cl[3][1] < 10)
        {
            printf("%d：0%d", cl[3][0], cl[3][1]);
        }
        else
        {
            printf("%d：%d", cl[3][0], cl[3][1]);
        }
        printf(" ~ ");
        if (cl[3][3] < 10)
        {
            printf("%d：0%d\t", cl[3][2], cl[3][3]);
        }
        else
        {
            printf("%d：%d\t", cl[3][2], cl[3][3]);
        }
        printf("拥挤度为：%d%%", cl[3][4]);
        printf("\n");

        printf("娱乐其余时间段拥挤度：%d%%\n\n", cl[3][7]);

        printf("全天际拥挤度：%d%%\n\n", cl[4][0]);

        //用户交互阶段：是否继续查询
        printf("是否要继续修改？\n是请输入1，否请输入0.\n");
        printf("请输入操作：");
        scanf("%d", &flag);
    }
}