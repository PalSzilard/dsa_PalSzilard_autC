//
// Created by Pal on 3/10/2021.
//

#ifndef INTARRAY_FUNCTION_H
#define INTARRAY_FUNCTION_H
#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int size;
    int* elements;
}intArray;
intArray* createArray(int size);
void readArray(const char*fileName,intArray *array);
void printArray(intArray* array);
void fillArray(intArray* array,int size,int first,int last);
void printArrayToFile(const char*fileName,intArray *array,int size);
void sortArray(intArray* array,int size);
void findElement(intArray*array, int size, int seek);
int minimum(intArray* array, int size);
int sum(intArray* array);
double average(intArray* array);
int primsum(intArray* array);

#endif //INTARRAY_FUNCTION_H
