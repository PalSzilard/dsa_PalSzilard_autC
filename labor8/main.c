#include <stdio.h>
#include <stdlib.h>
#include "function.h"
/*1.	Adott   egy   szöveges   allomany,   amelynek   az   első
sorában   betűk   vannak   szóközökkel elválasztva. Készítsünk egy-egy egyszeresen láncolt listat,
kulon a nagybetukkel es kulon a kisbetukkel.
Irassuk ki a listakat. Melyik lista tartalmaz tobb elemet?*/
int main() {
    char n;
    int i=0,j=0,num=0,sum=0;
    Nodetype* first=NULL;//nagybetuk
    Nodetype* second=NULL;//kisbetuk
    Nodetype2* node=NULL;//szamok
    FILE*fin=fopen("be.txt","r");if(fin==NULL){printf("sikertelen filemegnyitas");return 0;}
    while(fscanf(fin,"%c",&n)!=EOF){
        if(n>='A' && n<='Z')
        {  i++;
            insertfront(&first,n);
        }
        else if(n>='a'&& n<='z')
        {   j++;
            insertfront(&second,n);
        }
        else
        {  int a=(char)n;
            push(&node,a);
            sum+=n;
            num++;
        }
    }
    printf("%i nagybetu van es %i kisbetu\n",i,j);
    listabejaras(first);
    printf("\n");
    listabejaras(second);
    printf("\n");
    if(i>j)
        printf("tobb nagybetu van mint kisbetu");
    else if(i<j)
        printf("tobb nagybetu van mint kisbetu");
    else
        printf("ugyanannyi nagybetu van mint kisbetu");

    /*
     * 2. Az állományban levő számokat helyezzétek be
     * egy dinamikus verembe. Írjátok ki a számok átlagát
     */
    printf("a szamok atlaga: %lf",sum/num);
    return 0;
}
