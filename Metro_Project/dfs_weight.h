#ifndef DFS_WEIGHT_H
#define DFS_WEIGHT_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"
#include "return_weight.h"
#include "return_weight.c"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);
extern double return_weight(int nowTime, int (*crd)[8], int nowLine, int *w);

void dfs_weight(int d_s_num, int d_e_num, Way *d_w, Station *d_s, int (*m)[197], int (*crd)[8], int st);

#endif