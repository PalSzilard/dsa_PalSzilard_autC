#include <stdio.h>
#include <stdio.h>
#include "function.h"
int main() {
   int be,m,n;
   FILE *fin=fopen("be.txt","r");if(fin==NULL){ printf("sikertelen filemegnyitas");return 0;}
    fscanf(fin,"%i%i",&m,&n);
    intArray * tomb= letrehozas(m);
   while(fscanf(fin,"%i",&be)!=EOF){
        beszur(be,tomb,m);
    }fclose(fin);
    kiir(tomb);
    printf("A kereset szam a %i-ik pozicioban van\n",keres(12,tomb,m));
    torles(tomb,9,m);
    kiir(tomb);
    return 0;
}
