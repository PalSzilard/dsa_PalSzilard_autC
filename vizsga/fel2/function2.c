//
// Created by Pal on 6/15/2021.
//

#include "function2.h"
HEAP *createHeap(int max) {//helyfoglalas
    HEAP* h=(HEAP*)malloc(sizeof(HEAP) );if(h==NULL){printf("sikertelen helyfoglalas");return 0;}
    h->size=0;
    h->maxSize=max;
    h->data=(CUSTOMER *)malloc(max* sizeof(CUSTOMER));if(h->data==NULL){printf("sikertelen helyfoglalas");return 0;}
    return h;
}
void insert(HEAP *h, int id, double time) {// beszuras
    h->size++;
    h->data[h->size].ID = id;
    h->data[h->size].time = time;
    up(h,h->size);
}
void up(HEAP* h, int i) {//emeles
    CUSTOMER seged;
    while ((i > 1) && (h->data[i/2].time < h->data[i].time)) {
        seged = h->data[i/2];
        h->data[i/2] = h->data[i];
        h->data[i] = seged;
        i /= 2;
    }
}
HEAP *input(const char* file,HEAP* h,int i){//beolvasas
    for (int j = 0; j < i; ++j) {
        int id;double time;
        FILE * f=fopen(file,"r");if(f==NULL){printf("sikertelen filemegnyitas");return NULL;}
       for(int k=0;k<h->maxSize;k++) {
           fscanf(f, "%i%lf", &id, &time);
           insert(h,id,time);
       }
    }
    return h;
}
void outsider(HEAP* h){// se nem idos se nem beteg szamolas
    int seged=0;
    for (int i = 0; i < h->maxSize; ++i) {
        if(h->data[i].ID/10!=9 && h->data[i].ID%10!=0)
            seged++;
    }
    printf("%i vevo van aki nem idos vagy nem beteg\n",seged);
}