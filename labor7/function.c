//
// Created by Pal on 3/31/2021.
//

#include "function.h"
Nodetype* Create(){
    Nodetype* node=(Nodetype*)malloc(sizeof(struct Nodetype*));
    if (node==NULL){printf("sikertelen helyfoglalas"); return 0;}
    node->next=NULL;
    return node;
}
void insertfront(Nodetype**front, int a){
    Nodetype* node=Create();
    node->info=a;
    node->next=*front;
    *front=node;
}
void destroy(Nodetype*front){
    if(front!=NULL)
    { p=front;
    front=front->next;
    free(p);}
    else printf("a lista ures");
}


int listabejaras(Nodetype*front){
    p=front;
    while (p!=NULL)
    { printf("%i ",p->info);
        p=p->next;}
}
void insertpos(Nodetype*front,int a ,int pos){
    int i;
    Nodetype* node=Create();
    node->info=a;
    if (front==NULL || pos==1)
    {node->next=front;
        front=node;}
    else{
        p=front;
        i=2;
        while (p->next!=NULL && i<pos)
        { p=p->next;i++;}

        node->next=p->next;
        p->next=node;
    }
}