#include <stdlib.h>

#include "node.h"
#include "stack.h"

int main( void )
{

    // create an empty stack
    Stack *stack = createStack();

    // push a node
    push(stack,1);
    push(stack,2);
    push(stack,3);

    traverseI(stack->top);
    traverseW(stack->top);
    traverseR(stack->top);

    pop(stack);
    traverseI(stack->top);
    
    // free nodes and stack
    freeNodes( stack->top );
    free(stack);

    return 0;
}
