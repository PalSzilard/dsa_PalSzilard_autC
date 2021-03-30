//
// Created by Pal on 3/29/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "sordinamikusan.h"

int IsEmpty(NodeType *front) {
    if (front==0)
        return 1;
    else return 0;
}

NodeType *Create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct NodeType *));
    newNode->next = NULL;
    return newNode;
}

void Insert(NodeType *front, NodeType *last, int a) {
    NodeType* newNode;
    newNode=Create();
    newNode->info=a;
    if (IsEmpty(front))
    {front=newNode;
        last=newNode;
    }
    else
    {
        last->next=newNode;
        last=newNode;
    }
}

int Delete(NodeType *front) {
    NodeType* auxNode;
    if (!IsEmpty(front))
    {
        auxNode=front;
        int auxinfo=front->info;
        front=front->next;
        free(auxNode);
        return auxinfo;
    } else return INT_MIN ;
}
