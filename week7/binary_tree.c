#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node* l_child;
    struct node* r_child;
}
node;

bool contains(int value);

node* root;

int main(void)
{
    root = (node*) malloc(sizeof( node ));
    root->val = 7;
    root->l_child = (node*) malloc(sizeof( node ));
    root->l_child->val = 3;
    root->r_child = (node*) malloc(sizeof( node ));
    root->r_child->val = 9;
    root->l_child->r_child = (node*) malloc(sizeof( node ));
    root->l_child->r_child->val = 6;
    free(root->l_child->r_child);
    free(root->l_child);
    free(root->r_child);
    free(root);
}

bool conatins(int value)
{
    // TODO
}
