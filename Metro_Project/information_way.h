#ifndef INFORMATION_WAY_H
#define INFORMATION_WAY_H

typedef struct WNode
{
    double len;      //边的长度
    int time_run;    //运行时间
    int time_stop;   //停靠时间
    double crowd;    //拥挤程度
    int route;       //轨道线路
    int aStation[2]; //存放两站点的序号
    int visited;     //是否被dfs访问
} Way;

Way way[219];

void get_info_way(Way *w);

#endif