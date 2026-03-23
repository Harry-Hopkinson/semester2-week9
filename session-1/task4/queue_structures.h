#ifndef QUEUE_STRUCTURES_H
#define QUEUE_STRUCTURES_H

typedef struct _queue
{
    struct _node *front;
    struct _node *back;
    int size;
} Queue;

#endif // QUEUE_STRUCTURES_H
