//
// Created by Pal on 4/14/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "function.h"
Nodetype* Create(){
    Nodetype* node=(Nodetype*)malloc(sizeof(struct Nodetype*));
    if (node==NULL){printf("sikertelen helyfoglalas"); return 0;}
    node->next=NULL;
    return node;
}
void insertfront(Nodetype**front, char a){
    Nodetype* node=Create();
    node->info=a;
    node->next=*front;
    *front=node;
}

int listabejaras(Nodetype*front){
    p=front;
    while (p!=NULL)
    { printf("%c ",p->info);
        p=p->next;}
}
//void insertback(Nodetype**front, char a){
//    Nodetype* node=Create();
//    node->info=a;
//    node->next=NULL;
//    if(front==NULL)
//    {*front=node;}
//    else
//    {p=front;
//        while (p->next!=NULL)
//        {
//            p=p->next;
//        }
//    p->next=node;}
//
//}
//verem
NodeType2 *Create2() {
    NodeType2 *newNode = (NodeType2 *) malloc(sizeof(struct Node *));
    newNode->next2 = NULL;
    return newNode;
}
void push(NodeType2 **topPtr, int data) {
    NodeType2 *newNode = Create2();
    newNode->info = data;
    newNode->next2 = *topPtr;
    *topPtr=newNode;
}
int top(NodeType2*topPtr)
{
    if (topPtr->info!=0)
        return topPtr->info;
}
int pop(NodeType2**topPtr)

{NodeType2 *aux;
    int auxinfo;
    aux = *topPtr;
    *topPtr = aux->next2;
    auxinfo = aux->info;
    free(aux);
    return auxinfo;}