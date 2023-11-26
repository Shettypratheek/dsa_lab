#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"

int main()
{
    Queue *test;
    test=initialise(6);
    assert(test->rear==-1);
    assert(test->front==-1);
   // printf("%d\n",test->rear);
    assert(push(test,10));
    assert(push(test,20));
    assert(push(test,30));
    assert(push(test,40));
    assert(push(test,50));
    assert(push(test,60));
    assert(push(test,70));
    display(test);
    assert(pop(test));
    assert(pop(test));
    assert(pop(test));
    display(test);
    assert(push(test,100));
    display(test);
    assert(peek(test));



    return 0;
}
