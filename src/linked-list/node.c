#include "node.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int value, Node* next)
{
    Node *new_node = malloc(sizeof(Node));

    if (!new_node) {
        perror("Erro ao alocar memória");
        exit(1);
    }

    new_node->value = value;
    new_node->next = next;

    return new_node;
}

void freeNode(Node* node)
{
    if (!node) return;

    
    if (node->next) {
        freeNode(node->next);
    }
    free(node);
}