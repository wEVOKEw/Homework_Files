#ifndef DFS_TIME_H
#define DFS_TIME_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);
void dfs_time(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197]);

#endif