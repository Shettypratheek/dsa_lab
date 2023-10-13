#include <stdio.h>
#include <stdlib.h>
#include"header.h"

int main()
{
    int n,odd,even;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    odd_even(n,&odd,&even);
    printf("The number of Odd and even number between %d is %d and %d",n,odd,even);
    return 0;
}
