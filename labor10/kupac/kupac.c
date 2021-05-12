//
// Created by Pal on 5/12/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include "kupac.h"

heap *createHeap(int max) {
    heap* h=(heap*)malloc(sizeof(heap) );if(h==NULL){printf("sikertelen helyfoglalas");return 0;}
    h->size=0;
    h->maxSize=max;
    h->data=(EURO*)malloc(max* sizeof(EURO));if(h->data==NULL){printf("sikertelen helyfoglalas");return 0;}
    return h;
}

void insert(heap *h, int ev, int honap, int forint) {
h->size++;
h->data[h->size].ev=ev;
h->data[h->size].honap=honap;
h->data[h->size].forint=forint;
//printf("%i %i %i\n",h->data[h->size].ev,h->data[h->size].honap,h->data[h->size].forint);
up(h,h->size);
}
void up(heap* h, int i) {
    EURO seged;
    while ((i > 1) && (h->data[i/2].forint < h->data[i].forint)) {
        seged = h->data[i/2];
        h->data[i/2] = h->data[i];
        h->data[i] = seged;
        i /= 2;
    }
}

char* numToMonth(int hon) {
    switch (hon) {
        case 1: return "januar";
        case 2: return "februar";
        case 3: return "marcius";
        case 4: return "aprilis";
        case 5: return "majus";
        case 6: return "junius";
        case 7: return "julius";
        case 8: return "augusztus";
        case 9: return "szeptember";
        case 10: return "oktober";
        case 11: return "november";
        case 12: return "december";

    }
}
/*void down(heap* h, int i) {
    while (2*i <= h->size) {
        int j = 2 * i;
        if (j < h->size && h->data[j] < h->data[j+1])
            j++;
        if (h->data[j] <= h->data[i]) break;
        swap(&h->data[i], &h->data[j]);
        i = j;
    }
}
void kupacrendez(heap *h, int N) {
    for (int i = N / 2; i >= 1; i--)
    {
        down(h, i);
    }
    for (int i = 1; i < N; i++)
    {
        torolmax(h);
        down(h, 1);
    }
}
int torolmax(heap *h) {
    int seged = h->data[1];
    h->data[1] = h->data[h->size];
    h->data[h->size] = seged;
    h->size--;
    return seged;
}*/

