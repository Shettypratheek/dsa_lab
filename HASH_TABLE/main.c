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
    assert(insert_data(my_table,"Arpitha"));
    assert(insert_data(my_table,"Bhuvan"));
    assert(insert_data(my_table,"Chandan"));
    assert(insert_data(my_table,"Dhanush"));
    assert(insert_data(my_table,"Eshwar"));
    assert(insert_data(my_table,"Fazal"));
    assert(insert_data(my_table,"Gagan"));
    assert(insert_data(my_table,"Harish"));
    assert(insert_data(my_table,"Imam"));
    assert(insert_data(my_table,"Jaggu"));
    assert(insert_data(my_table,"Kiran"));
    assert(insert_data(my_table,"Lavani"));
    assert(insert_data(my_table,"Mohan"));
    assert(insert_data(my_table,"Naga"));
    assert(insert_data(my_table,"Oorvashi"));
    assert(insert_data(my_table,"Pinku"));
    assert(insert_data(my_table,"Queen"));
    assert(insert_data(my_table,"Rakshitha"));
    assert(insert_data(my_table,"Shetty"));
    assert(insert_data(my_table,"Tilak"));
    assert(insert_data(my_table,"Upendra"));
    assert(insert_data(my_table,"Vivan"));
    assert(insert_data(my_table,"Walter"));
    assert(insert_data(my_table,"Xeon"));
    assert(insert_data(my_table,"Yash"));
    assert(insert_data(my_table,"Zameer"));
    assert(insert_data(my_table,"Sagar"));
    assert(insert_data(my_table,"Amith"));
    assert(insert_data(my_table,"Prajwal"));
    assert(insert_data(my_table,"Shivu"));
    assert(insert_data(my_table,"Mokashi"));
    assert(insert_data(my_table,"Akshara"));
    assert(insert_data(my_table,"Adarsh"));
    assert(insert_data(my_table,"Punith"));
    assert(insert_data(my_table,"Deepak"));
    assert(insert_data(my_table,"Deepak"));
    assert(insert_data(my_table,"Varun"));
    assert(insert_data(my_table,"Sudeep"));
    assert(insert_data(my_table,"Pavan"));
    assert(insert_data(my_table,"Kelvin"));
    assert(insert_data(my_table,"Praveen"));
    assert(insert_data(my_table,"Johnny"));
    assert(insert_data(my_table,"Priya"));
    assert(insert_data(my_table,"priya"));






    for(int i=0;i<26;i++)
        display(my_table[i]);

    return 0;
}
