//
// Created by Pal on 3/10/2021.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H
typedef struct{
    int rows;
    int cols;
    int** data;
}Matrix;
Matrix* createMatrix(int rows,int cols);
void readMatrix(const char *fileName, Matrix **array);
void printMatrix(Matrix* array);
void deleteRow();
int minimum(Matrix* matrix);

#endif //MATRIX_MATRIX_H
