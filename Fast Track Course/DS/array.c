#include "array.h"

Array initialization(int size)
{
    Array my_array;
    my_array.c_size=0;
    my_array.t_size=size>0 && size <=MAX_SIZE?size:MAX_SIZE;

    return my_array;
}
Array insert_data(Array my_array, data)
{
    if(my_array.c_size==my_array.t_size)
        return my_array;
    my_array.array[my_array.c_size]=data;
    my_array.c_size++;
    return my_array;
}
int search_element(Array my_array,int value)
{
    int i=0;
    for(i=0;i<my_array.c_size;i++)
    {
        if(my_array.array[i]==value){
                printf("FOUND\n");
            return 1;}

    }
    printf("NOT FOUND\n");
    return 0;
}
