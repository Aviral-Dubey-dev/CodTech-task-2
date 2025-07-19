#ifndef NODE_STRUCT
#define NODE_STRUCT

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

extern Node *head;

#endif
