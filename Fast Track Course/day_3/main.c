#include <stdio.h>
#include <stdlib.h>
#include"header.h"
#include<assert.h>

int main()
{
  /*  assert(binary_to_decimal(1001)==9);
    assert(binary_to_decimal(1010)==10);
    assert(decimal_to_binary(9)==1001);
    assert(decimal_to_binary(8)==1000);
    assert(decimal_to_binary(7)==111);
    generatesequence(9);
    sequence1(4);
    sequence2(4);*/
    //sum_of_digit();
    assert(recursive(3,2)==9);
    assert(recursive(4,2)==16);
    assert(recursive(10,2)==100);
    assert(factorial(5)==120);
    printf("%d\n",CONCATENATE(123,124));
    assert(CONCATENATE(123,123)==123123);
    assert(SQUARE(8)==64);
    mathematical_functions(4);


    return 0;
}
