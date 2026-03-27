#ifndef LIST_STRUCTURES_H
#define LIST_STRUCTURES_H

typedef struct _list {
    struct _node *head;
    int size;
} List;

#endif // LIST_STRUCTURES_H