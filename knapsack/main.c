#include <stdio.h>
#include <assert.h>
#include "header.h"

int main()
{
    List *test;
    KnapData data;
    test=initialise();
    assert(test->head==NULL);
    assert(test->tail==NULL);
    assert(test->count==0);

    data.weight=18;
    data.profit=25;
    assert(insert_at_beg(test,data));

    data.weight=15;
    data.profit=20;
    assert(insert_at_beg(test,data));

    data.weight=15;
    data.profit=24;
    assert(insert_at_beg(test,data));

    data.weight=15;
    data.profit=24;
    assert(insert_at_end(test,data));
    data.weight=15;
    data.profit=24;
    assert(insert_at_end(test,data));

    display(test);
    printf("Success\n");
    return 0;
}