#include <stdlib.h>
#include <stdio.h>
#include "function.h"
int main() {
    Nodetype * node=NULL;
    int size,i;
    FILE *fin = fopen("be.txt", "r");if(fin==NULL){printf("sikertelen filemegnyitas");return 0;}
    fscanf(fin, "%i", &size);
    for (i = 1; i <= size; ++i) {
        int ev, honap, forint;
        fscanf(fin, "%i%i%i", &ev, &honap, &forint);
        insertfront(&node, ev, honap, forint);
    }
    fclose(fin);
    FILE *fout=fopen("ki.txt","w");if(fout==NULL){printf("sikertelen filemegnyitas");return 0;}
    for(i = 0; i < size; ++i){
        fprintf(fout,"%i. %s: %i forint %i filler\n",node->info.ev,numToMonth(node->info.honap),
                node->info.forint/100,node->info.forint%100);
        node=node->next;

    }printf("\n");
    fclose(fout);
    listabejarasSearchMax(node);
    return 0;
}
