#include "node.h"
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

void freeNode(Node* node)
{
    if (!node) return;

    if (node->left) {
        freeNode(node->left);
    } if (node->right) {
        freeNode(node->right);
    }
    free(node);
}