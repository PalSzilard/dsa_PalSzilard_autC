//
// Created by Pal on 4/21/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

N_Type *Create() {// helyet foglalunk egy uj elemnek
    N_Type *newNode = (N_Type *) malloc(sizeof(struct NodeType *));
    newNode->k = NULL;
    return newNode;
}
void Insert(N_Type *front, N_Type *last, int a) {// beirunk egy uj elemet a sorba
    N_Type* newNode;
    newNode=Create();
    newNode->e=a;
    if (IsEmpty(front))
    {front=newNode;
        last=newNode;
    }
    else
    {
        last->k=newNode;
        last=newNode;
    }
}
int IsEmpty(N_Type *front) {//leelenorizuk hogy ures e sor
    if (front==0)
        return 1;
    else return 0;
}
void read(N_Type *front){// beolvasas allomany vegjelig
    FILE *fin=fopen("input.txt","r");if(fin==NULL){printf("sikertelen filemegnyitas");return;}
    int n;
    while (fscanf(fin,"%i",&n)!=EOF){
       Insert(front,last,n);
    }
    fclose(fin);

}
double firstsqrt(N_Type *front){// meghatarozuk az elso 19es gyoket
    int i;
    for(i=0;front->k!=0;i++)
    {if(front->e%19==0)
        {return sqrt(front->e);

    } else
    front=front->k;
    }
    return 0;
}
double avg(N_Type *front){//szamok atlaganak a negyzetenek kiszamitasa
    int i,sum=0;
    for(i=0;front->k!=0;i++)
    {sum+=front->e;
    front=front->k;}
    i++;
    return (sum/i)*(sum/i);
}
bool bigerten(N_Type *front){// ellenorzes hogy minden szam nagobb e mint 10
    int i;
    for(i=0;front->k!=0;i++)
    { if (front->e<=10)
        {
            return false;
        }
    }
    return true;
}