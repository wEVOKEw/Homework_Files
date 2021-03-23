#ifndef DFS_TICKECT_H
#define DFS_TICKECT_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"
#include "money.h"
#include "money.c"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);
extern double money(double distance);

void dfs_tickect(int d_s_num, int d_e_num, Way *d_w, Station *d_s, double (*m)[197]);

#endif