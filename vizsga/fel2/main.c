#include "function2.h"

int main() {
    HEAP *heap1;
    int maxHeapSize;
    FILE *fin = fopen("input.txt", "r");if(fin==NULL){printf("sikertelen filemegnyitas");return 0;}
    fscanf(fin, "%i", &maxHeapSize);//elemek szamanak beolvasasa
    //printf("%i",maxHeapSize);
    //fclose(fin);
    heap1 = createHEAP(maxHeapSize);//helyfoglalas hivas
    //input("input.txt",heap1,maxHeapSize);
    for (int j = 0; j <maxHeapSize ; ++j) {//beolvasas
        int id;double time;
        fscanf(fin, "%i%lf", &id, &time);
        insert(heap1,id,time);
    }
    fclose(fin);
    printf("Az %i ID-st szolgaljak ki utoljara\n",heap1->data[1].ID);
    printf("Az %i ID-st szolgaljak ki eloszor\n",heap1->data[maxHeapSize].ID);
    outsider(heap1);
    return 0;
}
