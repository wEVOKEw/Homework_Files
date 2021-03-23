#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "station.h" //站点命名
#include "station.c"
#include "information_way.h" //录入线路信息
#include "information_way.c"
#include "information_station.h" //录入站点信息
#include "information_station.c"
#include "dfs.h" //深度优先遍历
#include "dfs.c"
#include "find_s_station.h" //寻找起始站点对应序号
#include "find_s_station.c"
#include "find_e_station.h" //寻找目的站点对应序号
#include "find_e_station.c"
#include "refresh.h"
#include "refresh.c"
#include "matrix.h" //邻接矩阵
#include "matrix.c"
#include "matrix_direction.h" //权重为方向的邻接矩阵
#include "matrix_direction.c"
#include "find_next.h" //寻找下一个站点
#include "find_next.c"
#include "input_time.h" //时间输入
#include "input_time.c"
#include "time_table.h" //时刻表
#include "time_table.c"
#include "matrix_r.h" //权重为线路号的邻接矩阵
#include "matrix_r.c"
#include "dfs_time.h" //深度优先遍历寻找时间最短的线路
#include "dfs_time.c"
#include "matrix_dis.h" //权重为距离的邻接矩阵
#include "matrix_dis.c"
#include "dfs_tickect.h" //深度优先遍历寻找票价最少的线路
#include "dfs_tickect.c"
#include "def_crowd.h" //初始化时间段与拥挤度
#include "def_crowd.c"
#include "dfs_weight.h" //深度优先遍历加权时间最短的线路
#include "dfs_weight.c"
#include "change_crowd.h" //改变时间段与拥挤度
#include "change_crowd.c"
#include "dfs_weight_crowd.h" //深度优先遍历拥挤度小的加权时间最短
#include "dfs_weight_crowd.c"
#include "list_station.h" //打印出输入路线的所有站点
#include "list_station.c"

extern void give_name(char *name);
extern void get_info_way(Way *w);
extern void get_info_station(Station *s);
extern void dfs(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197]);
extern int f_e(char *d_e_name, Station *d_s);
extern int f_s(char *d_s_name, Station *d_s);
extern void refresh(Way *rf_w, Station *rf_s);
extern void matrix(int (*m)[197], Way *w);
extern void matrix_d(int (*m)[197], Way *w);
extern int find_next(int num, int dirc, int (*m)[197], Station *s, Way *w, int route);
extern void input_time(int *h, int *m);
extern void time_table(int num, Station *s, Way *w);
extern void matrix_r(int (*m)[197], Way *w);
extern void dfs_time(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197]);
extern void matrix_dis(double (*m)[197], Way *w);
extern void dfs_tickect(int d_s_num, int d_e_num, Way *d_w, Station *d_s, double (*m)[197]);
extern void def_crowd(int (*cl)[8]);
extern void dfs_weight(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197], int (*crd)[8], int st);
extern void change_crowd(int (*cl)[8]);
extern void dfs_weight_crowd(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197], int (*crd)[8], int st);
extern void list_station(int num, Way *w, Station *s);

int main()
{
    int time_h, time_m;
    int start_time;
    char start[20]; //起始站点
    char end[20];   //目的站点

    int s_num, e_num;

    char s_name[197][20];
    char *s;
    s = &s_name[0][0]; //命名站点使用的变量

    int i = 0; //计数器

    char password[10];
    int op;
    int direction;
    int route;
    int search_route;

    //邻接矩阵
    int map[197][197];
    int map_d[197][197];
    int map_r[197][197];
    double map_dis[197][197];

    int crowd_level[5][8];

    //轨道线路边的长度
    double len_1 = 38.54 / 31;
    double len_2 = 60.8 / 37;
    double len_3 = 30.0 / 23;
    double len_4 = 50.0 / 36;
    double len_6 = 43.0 / 31;
    double len_7 = 84.0 / 36;
    double len_8 = 34.0 / 25;

    //编辑边的信息
    for (i = 0; i < 31; i++)
    {
        way[i].len = len_1;
        way[i].time_run = 2;
        way[i].time_stop = 1;
        way[i].route = 1;
    }
    for (i = 0; i < 37; i++)
    {
        way[i + 31].len = len_2;
        way[i + 31].time_run = 2;
        way[i + 31].time_stop = 1;
        way[i + 31].route = 2;
    }
    for (i = 0; i < 23; i++)
    {
        way[i + 68].len = len_3;
        way[i + 68].time_run = 2;
        way[i + 68].time_stop = 1;
        way[i + 68].route = 3;
    }
    for (i = 0; i < 36; i++)
    {
        way[i + 91].len = len_4;
        way[i + 91].time_run = 2;
        way[i + 91].time_stop = 1;
        way[i + 91].route = 4;
    }
    for (i = 0; i < 31; i++)
    {
        way[i + 127].len = len_6;
        way[i + 127].time_run = 2;
        way[i + 127].time_stop = 1;
        way[i + 127].route = 6;
    }
    for (i = 0; i < 36; i++)
    {
        way[i + 158].len = len_7;
        way[i + 158].time_run = 2;
        way[i + 158].time_stop = 1;
        way[i + 158].route = 7;
    }
    for (i = 0; i < 25; i++)
    {
        way[i + 194].len = len_8;
        way[i + 194].time_run = 2;
        way[i + 194].time_stop = 1;
        way[i + 194].route = 8;
    }

    give_name(s);

    //编辑站点信息
    for (i = 0; i < 197; i++)
    {
        strcpy(station[i].name, s_name[i]);
    }

    get_info_way(way);
    get_info_station(station);

    matrix(map, way);
    matrix_d(map_d, way);
    matrix_r(map_r, way);
    matrix_dis(map_dis, way);

    def_crowd(crowd_level);

    printf("请输入密码：");
    scanf("%s", password);
    while (strcmp(password, "hustCSE") != 0)
    {
        printf("\n密码输入错误，请重新输入：");
        scanf("%s", password);
    }

    while (1)
    {
        printf("\n现在可用的操作有：\n");
        printf("1、指定路线与站点依次浏览线路\t2、输出指定线路各站名\t\n");
        printf("3、设置时间\t\t\t4、显示起始站点的时刻表\t\n");
        printf("5、指定起始与结束站点\t\t6、按时间最短排序\t\n");
        printf("7、按最少票价排序\t\t8、按加权时间排序并显示各路段间拥挤度\t\n");
        printf("9、改变拥挤度\t\t\t10、考虑拥挤程度并按加权排序\n");
        printf("0、退出\n\n");

        printf("请输入你要执行操作的序号：");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
        {
            printf("请输入起始查看的站点：");
            scanf("%s", start);

            s_num = f_s(start, station);

            printf("请输入要查询的路线号：");
            scanf("%d", &route);

            printf("请输入查看的方向（输入1为向前查看，输入2为向后查看）：");
            scanf("%d", &direction);

            find_next(s_num, direction, map_d, station, way, route);

            system("cls");

            break;
        }

        case 2:
        {
            printf("请输入要查询的线路：");
            scanf("%d", &search_route);

            list_station(search_route, way, station);

            system("cls");

            break;
        }

        case 3:
        {
            printf("请输入现在的时间：\n");

            input_time(&time_h, &time_m);

            if (time_h < 6)
            {
                start_time = ((time_h + 24 - 6) * 60) + time_m;
            }
            else
            {
                start_time = ((time_h - 6) * 60) + time_m;
            }

            system("cls");

            break;
        }

        case 4:
        {
            printf("请输入要查看时刻表的站点：");
            scanf("%s", start);

            s_num = f_s(start, station);

            time_table(s_num, station, way);

            system("cls");

            break;
        }

        case 5:
        {
            printf("请输入起始站点名称：");
            scanf("%s", start);
            printf("请输入目的站点名称：");
            scanf("%s", end);

            s_num = f_s(start, station);
            e_num = f_e(end, station);

            //dfs(s_num, e_num, way, station, map);

            system("cls");

            break;
        }

        case 6:
        {
            dfs_time(s_num, e_num, way, station, map_r);

            system("cls");

            break;
        }

        case 7:
        {
            dfs_tickect(s_num, e_num, way, station, map_dis);

            system("cls");

            break;
        }

        case 8:
        {
            dfs_weight(s_num, e_num, way, station, map_r, crowd_level, start_time);

            system("cls");

            break;
        }

        case 9:
        {
            change_crowd(crowd_level);

            system("cls");

            break;
        }

        case 10:
        {
            dfs_weight_crowd(s_num, e_num, way, station, map_r, crowd_level, start_time);

            system("cls");

            break;
        }

        case 0:
        {
            return 0;
        }
        }
    }
}
