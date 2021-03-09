#include <stdio.h>
#include <stdlib.h>
#include "cegesfeladat.h"
int main(){
    CEG *a;
    FILE *input=fopen("be.txt","r");
    int n;
    fscanf("be.txt","%i",&n);
    create(n);
    read_from_file(input,a,n);
    print(a,n);
    print_list(a,n,CEG.studies);
    destroy(a);
    return 0;

}