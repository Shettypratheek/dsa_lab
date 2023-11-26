
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "header.h"




TREE* initialize()
{
    TREE *my_tree;
    my_tree=(TREE*)malloc(sizeof(TREE));
    my_tree->root=NULL;
    my_tree->count=0;
    return my_tree;
}

Node* getnode(int key)
{
    Node *newnode;
    newnode=(Node*)malloc(sizeof(Node));
    newnode->key=key;
    newnode->left=newnode->right=NULL;
    return newnode;
}
int insert(TREE *my_tree,int key)
{
    Node *parent,*temp;
    parent=temp=my_tree->root;

    while(temp!=NULL && temp->key!=key)
    {

         parent=temp;
       if(key<temp->key)
        {
         temp=temp->left;
        }
        else if(key>temp->key)
        {
         temp=temp->right;
        }
    }
 if(temp==NULL)
 {
    Node *newnode;
     newnode=getnode(key);
     if(parent==NULL)
     {
         my_tree->root=newnode;
         my_tree->count++;
         return INSERT;
     }

  else if(key<parent->key)
  {
        parent->left=newnode;
        my_tree->count++;
         return INSERT;
  }
  else if(key>parent->key)
  {
        parent->right=newnode;
        my_tree->count++;
         return INSERT;
  }
}
}
void _preorder_(Node *root)
{
    if(root)
    {
        printf("%d  ",root->key);
       _preorder_(root->left);
        _preorder_(root->right);
    }

}
void _postorder_(Node *root)
{
 if(root)
    {
       _postorder_(root->left);
        _postorder_(root->right);
        printf("%d  ",root->key);
    }
}
void _inorder_(Node *root)
{
if(root)
    {
       _inorder_(root->left);
       printf("%d  ",root->key);
        _inorder_(root->right);

    }
}
