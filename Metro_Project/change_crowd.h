#ifndef CHANGE_CROWD_H
#define CHANGE_CROWD_H

#include "information_way.h"
#include "information_station.h"
#include "which_route_e.h"
#include "which_route.h"
#include "input_time.h"

extern void which_route_e(int s_num, int *num);
extern int which_route(int num);
extern void input_time(int *h, int *m);

void change_crowd(int (*cl)[8]);

#endif