#ifndef TIME_TABLE_H
#define TIME_TABLE_H

#include "information_way.h"
#include "information_station.h"
#include "which_e_num.h"
#include "which_e_num.c"
#include "which_num.h"
#include "which_num.c"

extern void which_route_e_num(int s_num, int (*num)[2]);
extern int which_num(int num, int *order);

void time_table(int num, Station *s, Way *w);

#endif