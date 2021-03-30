//
// Created by Pal on 3/29/2021.
//

#ifndef LABOR6_VEREMDINAMIKUS_H
#define LABOR6_VEREMDINAMIKUS_H

typedef struct {
    int info;
    struct NodeType *next;
}NodeType;
NodeType *topPtr;
int isEmpty(NodeType* topPtr);
NodeType* Create();
void Push(NodeType** topPtr, int data);
int Pop(NodeType** topPtr);
int Top(NodeType** topPtr);
#endif //LABOR6_VEREMDINAMIKUS_H
