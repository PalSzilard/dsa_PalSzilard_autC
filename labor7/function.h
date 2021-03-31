//
// Created by Pal on 3/31/2021.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef LABOR7_FUNCTION_H
#define LABOR7_FUNCTION_H
typedef struct Nodetype{
    int info;
    struct Nodetype*next;
}Nodetype;
 Nodetype*front,*p;
Nodetype* Create();
void insertfront(Nodetype**front, int a);
void destroy(Nodetype*front);
void insertpos(Nodetype*front,int a ,int pos);
int listabejaras(Nodetype*front);
#endif //LABOR7_FUNCTION_H
