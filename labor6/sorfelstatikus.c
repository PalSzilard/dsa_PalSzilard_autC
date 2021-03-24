//
// Created by Pal on 3/24/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "sorfelstatikus.h"

QUEUE *Create(int capacity) {
    QUEUE *myQueue=(QUEUE*)malloc(sizeof(QUEUE));if( myQueue==NULL){printf("sikertelen helyfoglalas");return 0;}
    myQueue->front=-1;
    myQueue->rear=-1;
    myQueue->maxsize=capacity;
    myQueue->items=(int*)malloc(capacity*sizeof(int));if( myQueue->items==NULL){printf("sikertelen helyfoglalas");return 0;}
    return myQueue;
}

bool IsEmpty(QUEUE *myQueue) {
 if(myQueue->front==-1)
     return true;
 else return false;
}

bool IsFull(QUEUE *myQueue) {
    if (myQueue->rear == myQueue->maxsize - 1)
        return true;
    else return false;
}
void Put(QUEUE *myQueue,int a){
  if(IsEmpty(myQueue))
  {myQueue->front=0;}
    myQueue->rear=myQueue->rear+1;
    myQueue->items[myQueue->rear]=a;
}
int Get(QUEUE *myQueue){
    int a;
    if(!IsEmpty(myQueue)){
    a=myQueue->items[myQueue->front];
    myQueue->front=myQueue->front+1;
        return a;}
    else return INT_MIN;

}
int Front_element(QUEUE *myQueue) {
 int a = myQueue->items[myQueue->front];
    return a;
}
