#ifndef STACK_H
#define STACK_H

#include "node_structures.h"
#include "stack_structures.h"


Stack *createStack( void );

void push( Stack *stack, int val );
void pop( Stack *stack );

#endif // STACK_H