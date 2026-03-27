#ifndef NODE_STRUCTURES_H
#define NODE_STRUCTURES_H

typedef struct _data {
    int value;
} Data;

typedef struct _node {
    struct _data *data;
    struct _node *next;    // self-referential pointer to Node
} Node;

#endif // NODE_STRUCTURES_H