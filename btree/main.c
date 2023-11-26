#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "header.h"

int main()
{
    TREE *tree;
    tree=initialize();

    assert(tree->count==0 && tree->root==NULL);


   assert(insert(tree,21));
    assert(insert(tree,20));
    assert(insert(tree,15));
    assert(insert(tree,30));
    assert(insert(tree,17));
    assert(insert(tree,25));
    assert(insert(tree,13));
    assert(insert(tree,22));

    _preorder_(tree->root);
      printf("\n");
    _inorder_(tree->root);
      printf("\n");
    _postorder_(tree->root);
      printf("\n");

  //  assert(insert(tree,1));
    return 0;
}
