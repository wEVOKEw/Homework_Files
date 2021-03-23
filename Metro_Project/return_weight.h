#ifndef RETURN_WEIGHT_H
#define RETURN_WEIGHT_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);

double return_weight(int nowTime, int (*crd)[8], int nowLine, int *w);

#endif