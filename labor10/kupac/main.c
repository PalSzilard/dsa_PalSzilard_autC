#include <stdio.h>
#include "kupac.h"
#include <stdlib.h>

int main() {
    heap *heap1;
    int maxHeapSize, i;
    FILE *fin = fopen("euro.txt", "r");if(fin==NULL){printf("sikertelen filemegnyitas");return 0;}
    fscanf(fin, "%i", &maxHeapSize);
    heap1 = createHeap(maxHeapSize);
    for (i = 1; i <= maxHeapSize; ++i) {
        int ev, honap, forint;
        fscanf(fin, "%i%i%i", &ev, &honap, &forint);
        //printf("%i %i %i\n",ev,honap,forint);
        insert(heap1, ev, honap, forint);
    }
    fclose(fin);
    FILE *fout=fopen("ki.txt","w");if(fout==NULL){printf("sikertelen filemegnyitas");return 0;}
    for(i = 1; i <= maxHeapSize; ++i){
        fprintf(fout,"%i. %s: %i forint %i filler\n",heap1->data[i].ev,numToMonth(heap1->data[i].honap),
                heap1->data[i].forint/100,heap1->data[i].forint%100);

    }
    printf("Euro maximum arfolyama:\n%i. %s: %i forint %i filler\n",heap1->data[1].ev,numToMonth(heap1->data[1].honap),
            heap1->data[1].forint/100,heap1->data[1].forint%100);
    return 0;
}
