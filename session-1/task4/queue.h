#ifndef QUEUE_H
#define QUEUE_H

#include "queue_structures.h"
#include "node_structures.h"

Queue *createQueue( void );

void join( Queue *queue, int val );
Node *leave( Queue *queue );

#endif // QUEUE_H