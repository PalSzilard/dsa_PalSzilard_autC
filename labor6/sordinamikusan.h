//
// Created by Pal on 3/29/2021.
//

#ifndef LABOR6_SORDINAMIKUSAN_H
#define LABOR6_SORDINAMIKUSAN_H
typedef struct
{int info;
    struct NodeType *next;
} NodeType;
NodeType *front, *last;
int isEmpty(NodeType* front);
NodeType* Create();
void Insert(NodeType* front,NodeType* last,int a);
int Delete(NodeType*front);

#endif //LABOR6_SORDINAMIKUSAN_H
