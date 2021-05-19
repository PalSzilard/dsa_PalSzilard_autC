//
// Created by Pal on 5/19/2021.
//

#ifndef HASITOTABLA_FUNCTION_H
#define HASITOTABLA_FUNCTION_H
typedef struct {
    int *elements;
    int size;
}intArray;
intArray * letrehozas(int);
int keres(int, intArray *, int);
int beszur(int, intArray *, int);
void torles(intArray *, int,int);
void kiir(intArray*);
#endif //HASITOTABLA_FUNCTION_H
