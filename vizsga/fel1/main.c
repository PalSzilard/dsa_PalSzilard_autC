#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"
int main() {
    NUMBER* num1= create(100);
    fill(num1);
    printSum(num1);
    return 0;
}
