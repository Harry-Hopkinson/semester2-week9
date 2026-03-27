#ifndef LIST_H
#define LIST_H

#include "list_structures.h"

Data *createData( int val );
List *createList( void );
void enlargeList( List *list );

void displayList( List *list );
void freeList( List *list );

void insert( List *list, Data *data, int loc );

#endif // LIST_H