#ifndef LIST_H
#define LIST_H

#include "list_structures.h"
#include "node_structures.h"

List *createList( void );

void addNode( List *list, Node *loc, int val );
Node *removeNode( List *list, Node *loc );

void freeList( List *list );

#endif // LIST_H