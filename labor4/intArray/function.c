//
// Created by Pal on 3/10/2021.
//

#include "function.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
intArray* createArray(int size){
    intArray *array = (intArray *) malloc(sizeof(intArray));
    if (array == NULL) {
        printf("Could not allocate memory");
        return NULL;
    }

    array->size = size;
    array->elements = (int *) malloc(array->size * sizeof(int));

    if (array->elements == NULL) {
        printf("Could not allocate memory.\n");
        free(array);
        return NULL;} else

    return array;}
void readArray(const char*fileName,intArray* array) {
    FILE *fin = fopen(fileName,"r");
    if (fin == NULL)
        printf("Could not open file");
        //return NUll;}
        int size;
        fscanf(fileName,"%i", &array->size);
        array = createArray(size);
        for (int i = 0; i < array->size; i++)
            fscanf(fileName, "%i", &array->elements[i]);

    }
    void printArray(intArray *array) {
        for (int j = 0; j < array->size; j++)
        { printf("%i ", array[j].elements);}
        printf("\n");
    }
void fillArray(intArray* array,int size,int first,int last){
    srand(time(NULL));
    for (int i=0;i<size;i++)
        array->elements[i]=rand()%(first-last+1)+first;
}
int rendezes(const void*q1,const void* q2){
    int *p1=(int*)q1;
    int *p2=(int*)q2;
    if (*p1>*p2)
        return -1;
    else if (*p1<*p2)
        return 1;
    else return 0;
}
void sortArray(intArray* array,int size){
    qsort(array->elements,size, sizeof(int),rendezes);
}

void printArrayToFile(const char*fileName,intArray*array,int size){
    FILE *fout=fopen(fileName,"w");
    for (int i;i<size;i++)
    fprintf(fout,"%i ",array->elements[i]);

}
void findElement(intArray*array, int size, int seek){
    for (int i=0;i<array->size;i++)
    {if (array->elements[i]==seek)
            printf("a kereset szam megvan\n");
    break;}
    printf("nincs meg a keresett szam\n");

}
int minimum(intArray* array, int size){
    int min=array->elements[0];
    for(int i=1;i<array->size;i++)
    {if (array->elements[i]<min)
            min=array->elements[i];}
    return min;
}
int sum(intArray* array){
    int i,sum=0;
    for (i=0;i<array->size;i++)
    {sum+=array->elements[i];}
    return sum;
}
double average(intArray* array){
    int i,avg=0;
    for (i=0;i<array->size;i++)
    {avg+=array->elements[i];}
    return avg/array->size;
}
bool primtest(int a){
    int i,k=1;
    for(i=2;i<sqrt(a);i++) {
        if (a%i==0)
            k++;
    }
    if (k==1)
        return true;
    else
        return false;

}
int primsum(intArray* array){
    int i,sum=0;
    for(int i=1;i<array->size;i++){
        if (primtest(array->elements[i]))
            sum+=array->elements[i];
    }
}
