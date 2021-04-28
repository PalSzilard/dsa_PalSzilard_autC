//
// Created by Pal on 4/21/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include <math.h>
void read(const char* filename,F* tomb){//beolvasas
    FILE * fin=fopen(filename,"r");if(fin==NULL){printf("sikertelen filemegnyits");return;}
    for(int i=0;fscanf(fin,"%i",&tomb->num[i])!=EOF;i++)
    {tomb->c=i;}
    tomb->c++;
    fclose(fin);
}

double firstsqrt(F* tomb) {//elso 19es gyokenek a kiszamitasa
    int i;
    for(i=0;i<tomb->c;i++)
    {if(tomb->num[i]%19==0)
        {return sqrt(tomb->num[i]);}
        else{ return 0;}
    }
}

double avg(F* tomb) {//szamok atlaganak a negyzetenek a kiszamitasa
    int sum=0;
    for(int i=0;i<tomb->c;i++)
    {sum+=tomb->num[i];}
    return (sum/tomb->c)*(sum/tomb->c);
}
bool bigerten(F* tomb){// ellenorzes hogy minden szam nagyobb e mint 10
    for(int i=0;i<tomb->c;i++)
    {if(tomb->num[i]<=10)
        {return false;}}
     return true;
}

