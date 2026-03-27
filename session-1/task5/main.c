#include <stdlib.h>

#include "queue.h"

int main( void )
{

    Queue *queue = createQueue();

    // code to test join, leave and display functions
    join(queue, createData(10));
    join(queue, createData(20));
    join(queue, createData(30));

    displayQueue(queue);

    leave(queue);
    displayQueue(queue);

    // free queue dynamic memory
    freeQueue(queue);
    free(queue);
    
    return 0;
}
