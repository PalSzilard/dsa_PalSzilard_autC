#include <stdlib.h>
#include <stdio.h>
#include "function.h"
int main() {
    F* tomb;
    read("input.txt",tomb);
    printf("%lf",firstsqrt(tomb));
    printf("%lf",avg(tomb));
    printf("%i",bigerten(tomb));

    return 0;
}
