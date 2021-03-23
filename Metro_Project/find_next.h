#ifndef FIND_NEXT_H
#define FIND_NEXT_H

#include "information_way.h"
#include "information_station.h"
#include "in_that_route.h"
#include "in_that_route.c"
#include "which_route_e.h"

extern int in_that_route(int num, int route);
extern void which_route_e(int s_num, int *num);

int find_next(int num, int dirc, int (*m)[197], Station *s, Way *w, int route);

#endif