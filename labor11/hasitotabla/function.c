//
// Created by Pal on 5/19/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
intArray * letrehozas( int n) {
    intArray *tomb=(intArray*)malloc(sizeof(intArray));if(tomb==NULL){ printf("sikertelen helyfoglalas"); return 0;}
    tomb->size=n;
    tomb->elements=(int*) malloc(n*sizeof(int));if(tomb->elements==NULL){ printf("sikertelen helyfoglalas"); return 0;}
    for (int i = 0; i < n; ++i) {
        tomb->elements[i]=-1;
    }
    return tomb;
}
int beszur(int k, intArray *T, int m) // k kulcsu elemet beszur
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T->elements[j]==-1)
        {
            T->elements[j]=k;
            return 0;
        }
        else i++;
    }
    while (i!=m);
    printf( "tulcsordulas\n");
    return 0;
}
int keres(int k, intArray *T, int m) //k kulcsu elemet keres
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T->elements[j]==k)
            return j; // visszaadja a megtalalt elem indexet
        else i++;
    }
    while ((T->elements[j]!=-1) && (i!=m));
    return -1; // ha nincs benne a keresett elem
}void kiir(intArray* tomb){
    printf("Az elemek: ");
    for(int i=0;i<tomb->size;i++){
        printf("%i ",tomb->elements[i]);
    }printf("\n");
}

void torles(intArray * tomb, int szam,int m) {
    int seged=keres(szam,tomb,m);
    if(seged!=-1)
    {tomb->elements[seged]=-1;
    printf("sikeres torles\n");}
    else
        printf("a kereset szam nincs bene a hasitotablaba\n");
}



