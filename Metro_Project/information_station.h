#ifndef INFORMATION_STATION_H
#define INFORMATION_STATION_H

typedef struct Node
{
    char name[20]; //站点名称
    int flag;      //判断其是否为可换乘站点，0为不可换乘，2为可换乘2站，3为可换乘3站
    double extime; //换乘时间
    int aWay[6];   //存放边的序号
    int visited;   //是否被dfs访问
} Station;

Station station[197];

void get_info_station(Station *s);

#endif