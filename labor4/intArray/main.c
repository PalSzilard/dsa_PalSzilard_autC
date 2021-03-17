#include <stdio.h>
#include <stdlib.h>
#include "function.h"
int main() {
intArray* a,*b;
int n,m,g=15;
int first=0, last=100;
a=createArray(n);
readArray("be.txt",a);
printArray(a);
b=createArray(m);
fillArray(b,m,first,last);
sortArray(b,m);
printArrayToFile("ki.txt",b,m);
findElement(a,m,g);
printf("%i",minimum(b,m));
printf("%i",sum(a));
printf("%lf",average(a));
printf("%i",primsum(b));
    return 0;
}
