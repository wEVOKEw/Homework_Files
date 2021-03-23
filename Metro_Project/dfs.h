#ifndef DFS_H
#define DFS_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route_e.c"
#include "which_route.h"
#include "which_route.c"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);
void dfs(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197]);

#endif