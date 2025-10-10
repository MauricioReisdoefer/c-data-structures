#ifndef NODE_H
#define NODE_H

typedef struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node* addNode(int value, Node* root);
Node* createNode(int value, Node* left, Node* right);
#endif