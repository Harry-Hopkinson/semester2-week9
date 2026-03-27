#include <stdlib.h>

#include "list.h"

int main( void )
{

    List *list = createList();

    // insert() - add some data to the list
    insert( list, createData(1), 0 ); // add with value 1 at index 0
    insert( list, createData(2), 1 );

    // further insert operations here, use displayList() to verify
    displayList( list );

    // free list dynamic memory
    freeList( list );
    free( list );
    
    return 0;
}
