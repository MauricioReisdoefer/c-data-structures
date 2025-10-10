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