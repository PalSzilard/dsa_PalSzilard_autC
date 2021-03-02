#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "teszt.h"
 int main() {
     int *t, i, n = 10, ker, m, j;
     srand(time(NULL));
     ker=rand();
     for (i = 0; i < 9; i++)
         for (j = 0; i < n; j++) {
             {   t=(int*)malloc(n*sizeof(int));
                 t[j] = rand();
             }
             printf("%lf\n",sebesegteszt(t,n,ker));
             free(t);
             n*=10;
         }
     return 0;

 }