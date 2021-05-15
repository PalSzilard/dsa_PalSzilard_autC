//
// Created by Pal on 5/15/2021.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef DINAMIKUSLISTA_FUNCTION_H
#define DINAMIKUSLISTA_FUNCTION_H
typedef struct {
    int ev;
    int honap;
    int forint;
}EURO;
typedef struct Nodetype{
    EURO info;
    struct Nodetype*next;
}Nodetype;
Nodetype *p,*front;
Nodetype* Create();
void insertfront(Nodetype**front, int a,int b, int c );
void listabejarasSearchMax(Nodetype*front);
char *numToMonth(int honap);

#endif //DINAMIKUSLISTA_FUNCTION_H
