//
// Created by Pal on 5/15/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "function.h"

char *numToMonth(int honap) {
    switch (honap) {
        case 1:
            return "januar";
        case 2:
            return "februar";
        case 3:
            return "marcius";
        case 4:
            return "aprilis";
        case 5:
            return "majus";
        case 6:
            return "junius";
        case 7:
            return "julius";
        case 8:
            return "augusztus";
        case 9:
            return "szeptember";
        case 10:
            return "oktober";
        case 11:
            return "november";
        case 12:
            return "december";

    }
}

Nodetype *Create() {
    Nodetype *node = (Nodetype *) malloc(sizeof(struct Nodetype *));
    if (node == NULL) {
        printf("sikertelen helyfoglalas");
        return 0;
    }
    node->next = NULL;
    return node;
}

void insertfront(Nodetype **front, int a, int b, int c) {
    Nodetype *node = Create();
    node->info.ev = a;
    node->info.honap = b;
    node->info.forint = c;
    node->next = *front;
    //printf("%i %i %i\n",node->info.ev,node->info.honap,node->info.forint);
    *front = node;
}

void listabejarasSearchMax(Nodetype *front) {
    p = front;
    int maxForint = -1, maxHonap, maxEv;
    while (p!= NULL) {
        if (p->info.forint > maxForint) {
            maxForint = p->info.forint;
            maxHonap = p->info.honap;
            maxEv = p->info.ev;
        }
        p = p->next;
    }
    printf("Euro maximum arfolyama:\n%i. %s: %i forint %i filler\n", maxEv, numToMonth(maxHonap), maxForint / 100,
           maxForint % 100);
}

void kiir(Nodetype *front) {
    FILE *fout = fopen("ki.txt", "w");
    if (fout == NULL) {
        printf("sikertelen filemegnyitas");
        return;
    }
    while (front!= NULL) {
        fprintf(fout, "%i. %s: %i forint %i filler\n", front->info.ev, numToMonth(front->info.honap),
               front->info.forint / 100, front->info.forint % 100);
//        printf("%i. %s: %i forint %i filler\n", front->info.ev, numToMonth(front->info.honap),
//                front->info.forint / 100, front->info.forint % 100);
        front = front->next;
    }
    fclose(fout);
}
