#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int sizeA,sizeB;


    /*inputArr( a,size);
    displayArr(&a,size);
    odd_even(&a,size);
     displayArr(&a,size);
     printf("\nThe smallest elemnt in the array is %d",smallest(&a,size));
     //displayArr(&a,size);
     printf("Enter the array elements:\n");
     for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int m;
    printf("Enter the size u want to split the array into\n");
    scanf("%d",&m);
     array_split(a,size,m);*/
     printf("Enter the size of A and B\n");
     scanf("%d %d",&sizeA,&sizeB);
     int A[sizeA],B[sizeB];
    merge_array(A,B,sizeA,sizeB);


    return 0;
}
