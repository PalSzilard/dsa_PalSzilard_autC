//
// Created by Pal on 3/29/2021.
//

#include "veremdinamikus.h"
#include <stdio.h>
#include <stdlib.h>

NodeType *create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
    newNode->next = NULL;
    return newNode;
}
void push(NodeType **topPtr, int data) {
    NodeType *newNode = create();
    newNode->info = data;
    newNode->next = *topPtr;
    *topPtr=newNode;
}
int top(NodeType*topPtr)
{
    if (topPtr->info!=0)
    return topPtr->info;
}
int pop(NodeType**topPtr)

            {NodeType *aux;
            int auxinfo;
            aux = *topPtr;
            *topPtr = aux->next;
            auxinfo = aux->info;
            free(aux);
    return auxinfo;}