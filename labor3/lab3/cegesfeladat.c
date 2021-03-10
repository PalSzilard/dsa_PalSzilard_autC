//
// Created by Pal on 3/3/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include "cegesfeladat.h"
 CEG* create(int n){
    CEG *a;
    a=(CEG*)malloc(n*sizeof(CEG));if(CEG==NULL){printf("sikertelen helyfoglalas");return 0;}
    return a;}
    void read_from_file(FILE *f,CEG *a,int n){
         *f=fopen("be.txt"","r");
        for(int i;i<n;++i){
            fscanf(f,"%[^\n]%i%s%i",&a[i]->name,&a[i]->age,&a[i]->job,&a[i]->studies);
            if(a[i]->studies==0)
                continue;
            else if(a->studies[i]==1)
            fscanf(f,"%[^\n]%lf",&a[i]->m.school,&a[i]->m.avg);
            else
                fscanf(f,"%[^\n]%lf",&a[i]->m.school,&a[i]->m.avg);
            fscanf(f,"%[^\n]%lf%s",&a[i].h.institute,&a[i]->h.avg,&a[i]->h.dep);
        }
    }
    void print(CEG* a,int n){
        for(int i;i<n;++i)
        {  printf("%s %i%s %i\n%s%lf\n%s %lf %s",a[i].name,a[i]->age,a[i]->job,a[i]->studies,a[i]->m.school,a[i]->m.avg,a[i]->h.institute,a[i]->h.avg,a[i]->h.dep);}
    }
    void print_list(CEG*a,int n,int studies){
        for(int i;i<n;++i)
        {printf("%i",a->studies[i]);}
}
    void destroy(CEG* a){
        free(a);
    }
