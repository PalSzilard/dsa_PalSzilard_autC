//
// Created by Pal on 6/14/2021.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#ifndef FEL1_FUNCTION_H
#define FEL1_FUNCTION_H
typedef struct {
    int nr_number;
    int *numbers;
} NUMBER;
NUMBER * create(int n);
void fill(NUMBER* num);
void printSum(NUMBER* num);
#endif //FEL1_FUNCTION_H
