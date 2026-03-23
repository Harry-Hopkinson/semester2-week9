#include <stdlib.h>

#include "node.h"
#include "queue.h"

int main( void )
{

    // create an empty queue
    Queue *queue = createQueue();

    // test join 
    // - use traverseI() to display the nodes
    // - which pointer do you pass to traverseI(): front or back?
    join( queue, 1 );
    join( queue, 2 );
    join( queue, 3 );

    traverseI( queue->front );
    traverseW( queue->front );
    traverseR(queue->front);

    // test leave 
    // - take care to free detached memory
    Node *node = leave( queue );
    freeNode( node );
    traverseI( queue->front );

    Node *node2 = leave( queue );
    freeNode( node2 );
    traverseW( queue->front );

    Node *node3 = leave( queue );
    freeNode( node3 );
    traverseR( queue->front );

    // free queue memory
    freeNodes( queue->front );
    // free queue
    free(queue);

    return 0;
}
