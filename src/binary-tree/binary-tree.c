#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "binary-tree.h"

Node* findValue(int value, Node* root)
{
    if (root == NULL) {
        perror("Not Found");
        return NULL;
    }

    if (root->value == value){
        return root;
    }
    else if(root->value > value){
        return findValue(value, root->left);
    }
    else {
        return findValue(value, root->right);
    }
}

Node* addNode(int value, Node* root) {
    if (root == NULL) {
        Node* new_node = createNode(value, NULL, NULL);
        return new_node;
    }

    if (value < root->value) {
        root->left = addNode(value, root->left);
    } else if (value == root->value) {
        return root;
    } else {
        root->right = addNode(value, root->right);
    }

    return root;
}