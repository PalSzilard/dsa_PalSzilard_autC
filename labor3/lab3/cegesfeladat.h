//
// Created by Pal on 3/3/2021.
//
#include <stdlib.h>
#include <stdio.h>

#ifndef LAB3_CEGESFELADAT_H
#define LAB3_CEGESFELADAT_H

    typedef struct {
        char school[30];
        double avg;
    } MIDDLE;
    typedef struct {
        char institute[30];// tobbszavas
        double avg;
        char dep[20];
    }HIGH;

    typedef struct {
        char name[30]; //tobbszavas
        int age;
        char job[25];
        int studies;
        MIDDLE m;
        HIGH h;
    } CEG;

void create(int n); //helyfoglalas, n a fogprogban olvassuk be
void read_from_file(FILE *f,CEG*a,int n);
void print(CEG*a,int n);//kiirja az oszes adatot a kepernyore
void print_list(CEG*a,int n,int studies);//kiirja a vegzetseg szerint

void destroy(CEG* a); //helyfelszabaditas
#endif //LAB3_CEGESFELADAT_H
