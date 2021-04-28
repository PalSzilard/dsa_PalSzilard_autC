#include <stdio.h>
#include "binarysearchtree.h"
#include <stdlib.h>
int main() {
    root *tree;
    tree=NULL;
    FILE *fin=fopen("be.txt","r");
    int szam;
    while(fscanf(fin,"%i",&szam)!=EOF)
    {insert(&tree,szam);
    }
    printf("Inorder bejaras:\n");
    inorder(tree);
    printf("\n 7es szam keresese: %i",Find(tree,7)->adat);
    return 0;
}
