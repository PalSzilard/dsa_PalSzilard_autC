//
// Created by Pal on 3/3/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include "cegesfeladat.h"
 create(int n){
    CEG *a;
    a=(CEG*)malloc(n*sizeof(CEG));if(CEG==NULL){printf("sikertelen helyfoglalas");return 0;}
    return a;}
    void read_from_file(FILE *f,CEG *a,int n){
         *f=fopen("be.txt","r");
        for(int i;i<n;++i){
            fscanf(f,"%[^\n]%i%s%i",&CEG.name[i],&CEG.age[i],&CEG.job[i],&CEG.studies[i]);
            if(CEG.studies[i]==0)
                continue;
            else if(CEG.studies[i]==1)
            fscanf(f,"%[^\n]%lf",&CEG.MIDDLE.school[i],&CEG.MIDDLE.avg[i]);
            else
                fscanf(f,"%[^\n]%lf",&CEG.MIDDLE.school[i],&CEG.MIDDLE.avg[i]);
            fscanf(f,"%[^\n]%lf%s",&CEG.HIGH.institute[i],&CEG.HIGH.avg[i],&CEG.HIGH.dep[i]);
        }
    }
    void print(CEG a,int n){
        for(int i;i<n;++i)
        {  printf("%s %i%s %i\n%s%lf\n%s %lf %s",CEG.name[i],CEG.age[i],CEG.job[i],CEG.studies[i],CEG.MIDDLE.school[i],CEG.MIDDLE.avg[i],CEG.HIGH.institute[i],CEG.HIGH.avg[i],CEG.HIGH.dep[i]);}
    }
    void print_list(CEG*a,int n,int studies){
        for(int i;i<n;++i)
        {printf("%i",CEG[i].studies);}
}
    void destroy(CEG* a){
        free(a);
    }
