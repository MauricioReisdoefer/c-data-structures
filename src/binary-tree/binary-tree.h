#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "node.h"

Node* findValue(int value, Node* root);
Node* addNode(int value, Node* root);
Node* findMin(Node* root);
Node* removeNode(int value, Node* root);
Node* findMax(Node* root);
void printTree(Node* root);

#endif