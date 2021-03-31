#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {
    Nodetype* first=NULL;
    //first=Create();
    int num;
    scanf("%i",&num);
    while(num!=0)
    {insertfront(&first,num%10);
    num/=10;}
    listabejaras(first);
    return 0;
}
