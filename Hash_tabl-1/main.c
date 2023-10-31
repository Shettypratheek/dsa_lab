#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"
int main()
{
    Hash *my_table[SIZE];
    for(int i=0;i<SIZE;i++)
        my_table[i]=initialise_hash();
    assert(my_table[0]->hashaddress->head==NULL);
    assert(my_table[0]->hashaddress->tail==NULL);
    assert(my_table[0]->hashaddress->count==0);
    assert(my_table[1]->hashaddress->head==NULL);
    assert(insert_data(my_table,1));
    assert(insert_data(my_table,2));
    assert(insert_data(my_table,3));
    assert(insert_data(my_table,4));
    assert(insert_data(my_table,4));
    assert(insert_data(my_table,5));
    assert(insert_data(my_table,6));
    assert(insert_data(my_table,7));
    assert(insert_data(my_table,8));
    assert(insert_data(my_table,9));
    assert(insert_data(my_table,10));
    assert(insert_data(my_table,201));
    assert(insert_data(my_table,22));
    assert(insert_data(my_table,23));
    assert(insert_data(my_table,234));
    assert(insert_data(my_table,211));
    assert(insert_data(my_table,212));
    assert(insert_data(my_table,211));
    assert(insert_data(my_table,213));
    assert(insert_data(my_table,210));
    assert(insert_data(my_table,215));
    assert(insert_data(my_table,216));
    assert(insert_data(my_table,217));
    assert(insert_data(my_table,218));
    assert(insert_data(my_table,219));
    assert(insert_data(my_table,230));
    assert(insert_data(my_table,215));
    assert(insert_data(my_table,295));
    assert(insert_data(my_table,212));
    assert(insert_data(my_table,212));
    assert(insert_data(my_table,212));






     for(int i=0;i<SIZE;i++){
        printf("Index[%d] :-",i);
        display(my_table[i]);
        printf("\n");
     }
    printf("Success");
    return 0;
}
