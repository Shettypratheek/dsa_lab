#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    /*Student student[10];
    for(int i=0;i<2;i++){
        printf("Enter the details for student %d\n",i+1);
        inputStudentdetails(&student[i]);
        printf("\n");}
    for(int i=0;i<2;i++){
        printf("The details for student %d\n",i+1);
        printStudentdetails(student[i]);
        printf("\n");

    }

    Complex num1,num2,result;
    printf("Enter the real and imaginary part of first complex number:\n");
    scanf("%f %f",&num1.real,&num1.imaginary);

    printf("Enter the real and imaginary part of second complex number:\n");
    scanf("%f %f",&num2.real,&num2.imaginary);

    result=AddComplex(num1,num2);
    printf("%f+%fi\n",result.real,result.imaginary);

    result=SubComplex(num1,num2);
    printf("%f %c %fi\n",result.real,(result.imaginary>=0)? '+':'-',(result.imaginary>=0)?result.imaginary:-result.imaginary);

    result=MultComplex(num1,num2);
    printf("%f + %fi\n",result.real,result.imaginary);
    */
    Grocery Item[10];
    for(int i=0;i<4;i++){
        printf("Item :%d\n",i+1);
        inputGrocerydetails(&Item[i]);
        printf("\n");
    }
    totalitem(&Item,10);
    /*
    int totalsize,splitsize;
    //Array *my_arr;
    printf("Enter the total size of array:\n");
    scanf("%d",&totalsize);
    printf("Enter the split size:\n");
    scanf("%d",&splitsize);
    int *original_arr=(int*)malloc(totalsize*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<totalsize;i++)
        scanf("%d",&original_arr[i]);
    int parts=totalsize/splitsize;

    Array  *my_arr=(Array *)malloc(parts*sizeof(Array));

    splitarray(my_arr,original_arr,splitsize,totalsize,parts);

    display(my_arr,parts);*/
    return 0;
}
