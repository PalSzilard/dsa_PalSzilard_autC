//
// Created by Pal on 5/5/2021.
//

#ifndef JAVITAS_SOR_H
#define JAVITAS_SOR_H
#include <stdbool.h>

typedef struct N_Type{
    int e;
    struct N_Type *k;
}N_Type;
N_Type * front, *last;
N_Type* Create();
void Insert(N_Type* front,N_Type * last,int a);
int IsEmpty(N_Type *front);
//double firstsqrt(N_Type *front);
void read(N_Type *front);
double avg2(N_Type *front);
bool bigerten2(N_Type *front);
#endif //JAVITAS_SOR_H
