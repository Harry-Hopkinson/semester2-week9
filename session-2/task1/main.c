#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "list.h"

int main( void )
{

    // create an empty list
    List *list = createList();

    // add/delete nodes with addNode() and deleteNode()
    addNode(list,(Node *)NULL,1);
    addNode(list,list->head,2);
    addNode(list,list->head,3);

    // display the list
    traverseI( list->head );
    traverseR( list->head );
    traverseW( list->head );

    // free list memory
    freeNodes( list->head );
    freeList( list );

    return 0;
}
