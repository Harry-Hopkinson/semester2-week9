#ifndef STACK_STRUCTURES_H
#define STACK_STRUCTURES_H

typedef struct _data 
{
    int value;
} Data;

typedef struct _stack
{
    int blockSize;          // default block-size
    int size;               // currently allocated size
    struct _data **data;    // stack array of Data*
    int top;                // index of stack top
} Stack;

#endif // STACK_STRUCTURES_H