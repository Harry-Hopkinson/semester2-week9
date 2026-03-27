#ifndef TREE_STRUCTURE_H
#define TREE_STRUCTURE_H

#include "tree_node.h"

typedef struct _tree {
    Node *root;
    int size;
} Tree;

#endif // TREE_STRUCTURE_H