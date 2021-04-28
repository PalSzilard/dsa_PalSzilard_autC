//
// Created by Pal on 4/28/2021.
//

#ifndef LABOR9_BINARYSEARCHTREE_H
#define LABOR9_BINARYSEARCHTREE_H

typedef struct root
{
    int adat;
    struct root *bal;
    struct root *jobb;
}root;
root *create(int);//
void destroy(root **);
void insert(root **, int);//
void inorder(root *);//
void preorder(root *);
void postorder(root *);
root *Delete(root **, int);
root *Find(root *, int);

#endif //LABOR9_BINARYSEARCHTREE_H
