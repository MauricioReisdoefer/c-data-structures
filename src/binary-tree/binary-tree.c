#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "binary-tree.h"

Node* findValue(int value, Node* root) {
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

Node* findMin(Node* root) {
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

Node* removeNode(int value, Node* root) {
    if (!root) return NULL;

    if (value < root->value) {
        root->left = removeNode(value, root->left);
    } else if (value > root->value) {
        root->right = removeNode(value, root->right);
    } else {

        if (!root->left) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            free(root);
            return temp;
        } else {
            Node* temp = findMin(root->right);
            root->value = temp->value; 
            root->right = removeNode(temp->value, root->right);
        }
    }
    return root;
}
