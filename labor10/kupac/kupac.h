//
// Created by Pal on 5/12/2021.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef KUPAC_KUPAC_H
#define KUPAC_KUPAC_H
typedef struct {
    int ev;
    int honap;
    int forint;
}EURO;
typedef struct {
    EURO* data;
    int size;
    int maxSize;
}heap;
heap *createHeap(int max);
void insert(heap* h,int ev,int honap,int forint);
void up(heap* h, int i);
void down(heap* h, int i);
void kupacrendez(heap* h, int N);
int torolmax(heap *h);
char* numToMonth(int hon);
#endif //KUPAC_KUPAC_H
