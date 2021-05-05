//
// Created by Pal on 5/5/2021.
//

#ifndef JAVITAS_TOMB_H
#define JAVITAS_TOMB_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int c;
    int *num;
} F;
void read2(const char * filename,F* tomb);
double firstsqrt(F* tomb);
double avg(F* tomb);
bool bigerten(F* tomb);


#endif //JAVITAS_TOMB_H
