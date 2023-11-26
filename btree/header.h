
#include<stdio.h>
#include<stdlib.h>
#define INSERT 1


typedef struct _node_
{
    int key;
    struct _node_ *left;
    struct _node_ *right;
}Node;

typedef struct _tree_
{
    Node *root;
    int count;
}TREE;

TREE* initialize();
int insert(TREE*,int);
void _preorder_(Node*);
void _postorder_(Node*);
void _inorder_(Node*);
