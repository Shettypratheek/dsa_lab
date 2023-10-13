#include<stdio.h>
#include<stdlib.h>
#define START_INDEX 0
int inputArr(int a[],int len)
{
    int i;
    printf("Enter the elements of array\n");
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);


    return 0;

}
int displayArr(int *arr,int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d\t",arr[i]);
    return 0;
}
int odd_even(int *arr,int len)
{
    int i;
    printf("\n");
    for(i=0;i<len;i++){
        if(arr[i]%2==0)
            arr[i]=arr[i]+20;
        else
            arr[i]=arr[i]-10;

    }
    return 0;
}

int smallest(int *arr,int len)
{
    int i,small=arr[START_INDEX];
    for(i=0;i<len;i++){
        if(small>arr[i]) small=arr[i];
        }


  return small;

}
int array_split(int *arr,int len,int m)
{
    int parts=len/m,startindex=0,i,j;
    for(int i=0;i<m;i++){
    for(j=startindex;j<startindex+parts;j++)
        printf("%d\t",arr[j]);
    printf("\n");
    startindex=startindex+parts;
    }
    return 0;
}
int merge_array(int *A,int *B,int size_A,int size_B)
{
    int i,j;
   A=(int*)malloc(size_A*sizeof(int));
   for(i=0;i<size_A;i++)
        scanf("%d",&A[i]);
   for(i=0;i<size_B;i++)
        scanf("%d",&B[i]);
    A=(int*)realloc(A,size_B*sizeof(B));
  for(i=0;i<+size_B;i++){
    A[size_A+i]=B[i];

  }
  for( j=0;j<size_A+i;j++)
    printf("%d\t",A[j]);
  return 0;
}
