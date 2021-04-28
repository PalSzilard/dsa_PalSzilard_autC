//
// Created by Pal on 4/21/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#ifndef PARCIALIS_FUNCTION_H
#define PARCIALIS_FUNCTION_H
typedef struct {
    int c;
    int *num;
} F;
void read(const char * filename,F* tomb);
double firstsqrt(F* tomb);
double avg(F* tomb);
bool bigerten(F* tomb);


#endif //PARCIALIS_FUNCTION_H
