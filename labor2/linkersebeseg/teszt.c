//
// Created by Pal on 3/1/2021.
//

#include <time.h>
#include "teszt.h"

double sebesegteszt(int *t, int n ,int ker) {
    clock_t begin = clock();
    for(int i=0;i<n;i++)
    {if(t[i]==ker)
            break;}
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    return time_spent;
    return 0;
}