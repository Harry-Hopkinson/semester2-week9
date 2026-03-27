#ifndef LIST_STRUCTURES_H
#define LIST_STRUCTURES_H

typedef struct _data {
    int value;
} Data;

typedef struct _list {
    int blockSize;          // default block-size
    int size;               // currently allocated size
    struct _data **data;    // list array of Data*
    int length;             // length of actual list
} List;

#endif // LIST_STRUCTURES_H