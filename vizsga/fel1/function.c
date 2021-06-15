//
// Created by Pal on 6/14/2021.
//

#include "function.h"


NUMBER * create(int n){//helyfoglalas
    NUMBER *number=(NUMBER*) malloc(sizeof (NUMBER));if(number==NULL){ printf("sikertelen helyfoglalas");return 0;}
    number->nr_number=n;
    number->numbers=(int*) malloc(number->nr_number*sizeof (int));if(number->numbers==NULL){ printf("sikertelen helyfoglalas");return 0;}
    return number;
}
void fill(NUMBER* num){//feltoltes 0-s vegjelig
    int i=0;
    scanf("%i",&num->numbers[i]);
    while(num->numbers[i]){
        i++;
        scanf("%i",&num->numbers[i]);
    }
    num->nr_number=i;
}
void printSum(NUMBER* num){//kiirjuk hany szam van amely oszthato szamjegyeinek oszegevel
    int eredmeny=0,sum;
    for (int i = 0; i <num->nr_number ; ++i) {
        int seged=num->numbers[i];
        sum=0;
        while(num->numbers[i]){
            sum+=num->numbers[i]%10;
            num->numbers[i]/=10;
        }
        if(seged%sum==0){
            eredmeny++;
        }

    }
    printf("Osszesen %i szam van amely oszthato szamjegyeinek oszegevel",eredmeny);
}
