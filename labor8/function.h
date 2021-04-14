//
// Created by Pal on 4/14/2021.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef LABOR8_FUNCTION_H
#define LABOR8_FUNCTION_H
//lista
typedef struct Nodetype{
    char info;
    struct Nodetype*next;
}Nodetype;
Nodetype*front,*p;

Nodetype* Create();
void insertfront(Nodetype**front, char a);
void insertback(Nodetype**front, char a);
int listabejaras(Nodetype*front);
//verem dinamikusan

typedef struct {
    int info;
    struct NodeType2 *next2;
}NodeType2;
NodeType2 *topPtr;
int isEmpty(NodeType2* topPtr);
NodeType2* Create2();
void Push(NodeType2** topPtr, int data);
int Pop(NodeType2** topPtr);
int Top(NodeType2** topPtr);
#endif //LABOR8_FUNCTION_H
