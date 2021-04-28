//
// Created by Pal on 4/28/2021.
//

#include <stdio.h>
#include "binarysearchtree.h"
#include <stdlib.h>
root *create(int a)
{
    root *ag;
    ag = (root *)(malloc(sizeof(root)));
    if(!ag)
    {
        printf("Sikertelen helyfoglalas");
        return 0;
    }
    ag->adat = a;
    ag->jobb = NULL;
    ag->bal = NULL;
    return ag;
}
void insert(root **fa, int a)
{
    if((*fa) == NULL)
    {
        (*fa) = create(a);
    }
    else
    {
        if((*fa)->adat > a)
            insert(&((*fa)->bal),a);
        else insert(&((*fa)->jobb),a);
    }
}
void inorder(root *fa)
{
    if(fa->bal)
        inorder(fa->bal);
    printf("%3i ", fa->adat);
    if(fa->jobb)
        inorder(fa->jobb);
}
void preorder(root *fa)
{
    printf("%3d ", fa->adat);
    if(fa->bal)
        preorder(fa->bal);
    if(fa->jobb)
        preorder(fa->jobb);
}
void postorder(root*fa)
{
    if(fa->bal)
        postorder(fa->bal);
    if(fa->jobb)
        postorder(fa->jobb);
    printf("%3d ", fa->adat);}

void destroy(root **fa)
{
    if((*fa) != NULL)
    {
        destroy(&((*fa)->bal));
        destroy(&((*fa)->jobb));
        free((*fa));
        (*fa) = NULL;
    }}
root *Find(root *fa, int a)
{
    if(fa == NULL)
    {
        return 0;
    }
    if(a == fa->adat)
        return fa;
    else
    {
        if(a < fa->adat)
            Find(fa->bal, a);
        else
            Find(fa->jobb, a);
    }
}
