#include <stdlib.h>
#include <stdio.h>
#include "tomb.h"
#include "sor.h"
int main() {

//    F* tomb;
//    read2("input.txt",tomb);
//    printf("%lf",firstsqrt(tomb));
//    printf("%lf",avg(tomb));
//    printf("%i",bigerten(tomb));


    N_Type* first=NULL;
    read(first);
//    printf("az elso 19el oszthato szam gyoke: %lf\n",firstsqrt(first));
//    printf("a szamok atlaganak a negyzete: %lf\n",avg2(first));
   printf("%i",bigerten2(first));
    return 0;
}
