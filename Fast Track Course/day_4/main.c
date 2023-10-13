#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "array.h"

int main() {
    int min,max;
   int arr[10]={1,9,1,2,1,3,4,1,6,2};
   //char str[]="shetty";

   ascending_array(arr,6);
   // descending_array(arr,6);
   find_max_min(arr,6,&max,&min);
   //printf("\n%d \t%d",max,min);
   //store_array(arr,10);
  //assert(search_element(arr,10,15)==0);
  //char str[]="malayalam";
 // printf("%s",str);
 // printf("\n");
    //string_reverse(str);
 // printf("%s",str);
  //  assert( palindrome(str)==1);
    //assert(palindrome(str)==1);
   // char str_1[20]="Priyanka";
   // char str_2[20]="piya";



   // string_con(str_1,str_2);
   // printf("%s",str_1);
    //str_rvs(str_1);


   return 0;
}

