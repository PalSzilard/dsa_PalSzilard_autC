//
// Created by Pal on 3/24/2021.
//
#include <stdbool.h>
#ifndef LABOR6_VEREMFELSTATIKUS_H
#define LABOR6_VEREMFELSTATIKUS_H
typedef struct {
    int front;
    int rear;
    int maxsize;
    int * items;
}QUEUE;
QUEUE *Create(int capacity);
bool IsEmpty(QUEUE *myQueue);
bool IsFull(QUEUE *myQueue);
void Put(QUEUE *myQueue,int a);
int Get(QUEUE *myQueue);
int Front_element(QUEUE *myQueue);

#endif //LABOR6_VEREMFELSTATIKUS_H
