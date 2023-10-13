#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "array.h"


int main()
{
    Array tst_arr;
    tst_arr=initialization(5);
    assert(tst_arr.c_size==0);
    assert(tst_arr.t_size==5);
    tst_arr=insert_data(tst_arr,10);
    tst_arr=insert_data(tst_arr,20);
    tst_arr=insert_data(tst_arr,30);
    tst_arr=insert_data(tst_arr,40);
    tst_arr=insert_data(tst_arr,50);
    assert(tst_arr.c_size==5);
    tst_arr=insert_data(tst_arr,60);
    assert(tst_arr.c_size==5);
    assert(search_element(tst_arr,60)==0);
    return 0;
}
