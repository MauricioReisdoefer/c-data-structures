#include "binary-tree.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int value, Node* left_n, Node* right_n)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node) {
        perror("Erro ao alocar memória");
        exit(1);
    }

    new_node->value = value;
    new_node->left = left_n;
    new_node->right = right_n;

    return new_node;
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