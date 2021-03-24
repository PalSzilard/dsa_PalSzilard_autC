#include <stdio.h>
#include "function.h"
#include <stdlib.h>
int main() {
 STACK*myStack;
    int i;
 myStack=create(11);
    for (i = 0; i< 10; ++i) {
        if(isFull(myStack))
            push(myStack,i);
    }
    while(!isEmpty(myStack))
    {
        printf("%i",pop(myStack));
    }
    return 0;
}
