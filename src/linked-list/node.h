#ifndef NODE_H
#define NODE_H

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void freeNode(Node* node);
Node* createNode(int value, Node* next);
#endif