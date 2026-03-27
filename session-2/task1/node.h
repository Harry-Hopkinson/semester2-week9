#ifndef NODE_H
#define NODE_H

#include "node_structures.h"

Data *createData( int value );
Node *createNode( Data *data );

void freeNode( Node *node );
void freeNodes( Node *top );

void traverseI( Node *start );
void traverseW( Node *node );
void traverseR( Node *node );

#endif