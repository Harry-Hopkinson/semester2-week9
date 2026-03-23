#ifndef QUEUE_H
#define QUEUE_H

#include "queue_structures.h"

Data *createData( int val );
Queue *createQueue( void );
void enlargeQueue( Queue *queue );

void displayQueue( Queue *queue );
void freeQueue( Queue *queue );

void join( Queue *queue, Data *data );
void leave( Queue *queue );

#endif // QUEUE_H