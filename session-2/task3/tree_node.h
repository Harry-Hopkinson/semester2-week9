#ifndef TREE_NODE_H
#define TREE_NODE_H

typedef struct _data {
    int value;
} Data;

typedef struct _node {
    struct _data *data;
    struct _node *child[2];
} Node;

#endif // TREE_NODE_H