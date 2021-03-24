//
// Created by Pal on 3/17/2021.
//

#ifndef STACK_FUNCTION_H
#define STACK_FUNCTION_H

typedef struct {
    int maxsize;
    int sp;
    int *items;
}STACK;
STACK *create(int capacity);
int isEmpty(STACK*myStack);
int isFull(STACK*myStack);
void push(STACK*myStack,int a);
int pop(STACK*myStack);
int top(STACK*myStack);
#endif //STACK_FUNCTION_H
