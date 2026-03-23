#ifndef STACK_STRUCTURES_H
#define STACK_STRUCTURES_H

typedef struct _stack
{
    struct _node *top;
    int size;
} Stack;

#endif // STACK_STRUCTURES_H