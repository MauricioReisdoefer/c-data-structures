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
    Node* current_node = root;
    while (current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node->next = newNode;
    return newNode;
}

void printTree(Node* root) {
    Node* current_node = root;

    while(current_node != NULL) {
        printf("%d\n", current_node->value);
        current_node = current_node->next;
    }
}

Node* findValue(int value, Node* root) {
    Node* current_node = root;
    while(current_node != NULL) {
        if(current_node->value == value){
            return current_node;
        }
        current_node = current_node->next;
    }
    return NULL;
}