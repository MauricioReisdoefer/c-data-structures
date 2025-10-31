#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "linked_list.h"

Node* addNode(int value, Node* root) {
    Node* newNode = createNode(value, NULL);

    if (root == NULL) {
        return newNode;
    }

    // O(n) implementation
    Node* current = root;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return newNode;
}
