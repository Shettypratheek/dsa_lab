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
    data.profit=24;
    assert(insert_data(test,data));

    data.weight=15;
    data.profit=25;
    assert(insert_data(test,data));

    data.weight=10;
    data.profit=15;
    assert(insert_data(test,data));

    float m;
    printf("Enter the maximum weight of bag:\n");
    scanf("%f",&m);

    printf("The maximum profit earned is %f\n",calculation(test,&m));

    display(test);
    printf("Success\n");
    return 0;
}