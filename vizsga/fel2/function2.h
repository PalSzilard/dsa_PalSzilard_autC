//
// Created by Pal on 6/15/2021.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef FEL2_FUNCTION2_H
#define FEL2_FUNCTION2_H
typedef struct {
    int ID;
    double time;
}CUSTOMER;
typedef struct {
    CUSTOMER* data;
    int size;
    int maxSize;
}HEAP;
HEAP *createHEAP(int max);
void insert(HEAP* h,int id, double time);
void up(HEAP* h, int i);
HEAP* input(const char* file,HEAP* h,int i);
void outsider(HEAP* h);
#endif //FEL2_FUNCTION2_H
