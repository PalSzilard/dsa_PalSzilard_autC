//
// Created by Pal on 4/21/2021.
//


#ifndef FEL2_FUNCTION_H
#define FEL2_FUNCTION_H

#include <stdbool.h>

typedef struct N_Type{
    int e;
    struct N_Type *k;
}N_Type;
N_Type * front, *last;
N_Type* Create();
void Insert(N_Type* front,N_Type * last,int a);
int IsEmpty(N_Type *front);
double firstsqrt(N_Type *front);
void read(N_Type *front);
double avg(N_Type *front);
bool bigerten(N_Type *front);

#endif //FEL2_FUNCTION_H
