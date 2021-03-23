#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "station.h" //վ������
#include "station.c"
#include "information_way.h" //¼����·��Ϣ
#include "information_way.c"
#include "information_station.h" //¼��վ����Ϣ
#include "information_station.c"
#include "dfs.h" //������ȱ���
#include "dfs.c"
#include "find_s_station.h" //Ѱ����ʼվ���Ӧ���
#include "find_s_station.c"
#include "find_e_station.h" //Ѱ��Ŀ��վ���Ӧ���
#include "find_e_station.c"
#include "refresh.h"
#include "refresh.c"
#include "matrix.h" //�ڽӾ���
#include "matrix.c"
#include "matrix_direction.h" //Ȩ��Ϊ������ڽӾ���
#include "matrix_direction.c"
#include "find_next.h" //Ѱ����һ��վ��
#include "find_next.c"
#include "input_time.h" //ʱ������
#include "input_time.c"
#include "time_table.h" //ʱ�̱�
#include "time_table.c"
#include "matrix_r.h" //Ȩ��Ϊ��·�ŵ��ڽӾ���
#include "matrix_r.c"
#include "dfs_time.h" //������ȱ���Ѱ��ʱ����̵���·
#include "dfs_time.c"
#include "matrix_dis.h" //Ȩ��Ϊ������ڽӾ���
#include "matrix_dis.c"
#include "dfs_tickect.h" //������ȱ���Ѱ��Ʊ�����ٵ���·
#include "dfs_tickect.c"
#include "def_crowd.h" //��ʼ��ʱ�����ӵ����
#include "def_crowd.c"
#include "dfs_weight.h" //������ȱ�����Ȩʱ����̵���·
#include "dfs_weight.c"
#include "change_crowd.h" //�ı�ʱ�����ӵ����
#include "change_crowd.c"
#include "dfs_weight_crowd.h" //������ȱ���ӵ����С�ļ�Ȩʱ�����
#include "dfs_weight_crowd.c"
#include "list_station.h" //��ӡ������·�ߵ�����վ��
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
    char start[20]; //��ʼվ��
    char end[20];   //Ŀ��վ��

    int s_num, e_num;

    char s_name[197][20];
    char *s;
    s = &s_name[0][0]; //����վ��ʹ�õı���

    int i = 0; //������

    char password[10];
    int op;
    int direction;
    int route;
    int search_route;

    //�ڽӾ���
    int map[197][197];
    int map_d[197][197];
    int map_r[197][197];
    double map_dis[197][197];

    int crowd_level[5][8];

    //�����·�ߵĳ���
    double len_1 = 38.54 / 31;
    double len_2 = 60.8 / 37;
    double len_3 = 30.0 / 23;
    double len_4 = 50.0 / 36;
    double len_6 = 43.0 / 31;
    double len_7 = 84.0 / 36;
    double len_8 = 34.0 / 25;

    //�༭�ߵ���Ϣ
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

    //�༭վ����Ϣ
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

    printf("���������룺");
    scanf("%s", password);
    while (strcmp(password, "hustCSE") != 0)
    {
        printf("\n��������������������룺");
        scanf("%s", password);
    }

    while (1)
    {
        printf("\n���ڿ��õĲ����У�\n");
        printf("1��ָ��·����վ�����������·\t2�����ָ����·��վ��\t\n");
        printf("3������ʱ��\t\t\t4����ʾ��ʼվ���ʱ�̱�\t\n");
        printf("5��ָ����ʼ�����վ��\t\t6����ʱ���������\t\n");
        printf("7��������Ʊ������\t\t8������Ȩʱ��������ʾ��·�μ�ӵ����\t\n");
        printf("9���ı�ӵ����\t\t\t10������ӵ���̶Ȳ�����Ȩ����\n");
        printf("0���˳�\n\n");

        printf("��������Ҫִ�в�������ţ�");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
        {
            printf("��������ʼ�鿴��վ�㣺");
            scanf("%s", start);

            s_num = f_s(start, station);

            printf("������Ҫ��ѯ��·�ߺţ�");
            scanf("%d", &route);

            printf("������鿴�ķ�������1Ϊ��ǰ�鿴������2Ϊ���鿴����");
            scanf("%d", &direction);

            find_next(s_num, direction, map_d, station, way, route);

            system("cls");

            break;
        }

        case 2:
        {
            printf("������Ҫ��ѯ����·��");
            scanf("%d", &search_route);

            list_station(search_route, way, station);

            system("cls");

            break;
        }

        case 3:
        {
            printf("���������ڵ�ʱ�䣺\n");

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
            printf("������Ҫ�鿴ʱ�̱��վ�㣺");
            scanf("%s", start);

            s_num = f_s(start, station);

            time_table(s_num, station, way);

            system("cls");

            break;
        }

        case 5:
        {
            printf("��������ʼվ�����ƣ�");
            scanf("%s", start);
            printf("������Ŀ��վ�����ƣ�");
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
