#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"

int main()
{
   List *test,*test1;
   test=initialise();
   test1=initialise();
   assert(test->head==NULL && test->tail==NULL);
   assert(test->count==0);
   assert(inser_at_begi(test,10));
   assert(inser_at_begi(test,20));
   assert(inser_at_begi(test,30));
   assert(inser_at_begi(test,40));
   assert(inser_at_begi(test,50));
   assert(inser_at_begi(test,60));
   assert(test->count==6);
   assert(insert_data_end(test,70));
   assert(insert_data_end(test,80));
   assert(insert_data_end(test,90));
   assert(insert_data_end(test,100));
   assert(insert_data_end(test,110));
   assert(insert_data_end(test,120));
   assert(test->count==12);
   assert(insert_after_data(test,200,110));
   assert(insert_data_end(test,130));
   assert(test->count==14);
   assert(search_list(test,100)==1);
   assert(search_list(test,95)==0);
  // printLinkedListData(test);
   //printf("%d\n",test->count);
   assert(delet_at_begi(test));
   //printLinkedListData(test);
   //printf("%d\n",test->count);
   assert(delet_at_end(test));
   //printLinkedListData(test);
    //printf("%d\n",test->count);
    assert(delete_element(test,110));
   // printf("%d\n",test->count);
   // printLinkedListData(test);
    assert(delete_element(test,120));
    //printLinkedListData(test);
   assert(test->tail->data==200);
   assert(insert_at_position(test,151,6));
   assert(insert_at_position(test,152,4));
   assert(insert_at_position(test,152,13));
   //printLinkedListData(test);
   assert(test->tail->data==152);
  // printf("%d\n",test->count);
    assert(inser_at_begi(test1,1));
    assert(inser_at_begi(test1,2));
    assert(inser_at_begi(test1,3));
    assert(inser_at_begi(test1,4));
    assert(inser_at_begi(test1,5));
    assert(inser_at_begi(test1,6));
    assert(inser_at_begi(test1,7));
    assert(inser_at_begi(test1,8));
    assert(test1->count==8);
    assert(insert_data_end(test1,9));
    assert(insert_data_end(test1,10));
    assert(insert_data_end(test1,11));
    assert(insert_data_end(test1,12));
    assert(insert_data_end(test1,13));
    assert(insert_data_end(test1,14));
   // printLinkedListData(test1);
  //  assert(merge_list(test,test1));
    //printLinkedListData(test);
   // printLinkedListData(test1);
   //printf("%d",test->count);
   //assert(reverse_list(test1));
   // printLinkedListData(test1);*/

    assert(inser_at_begi(test,12));
    assert(inser_at_begi(test,12));
   assert(inser_at_begi(test,12));
   //assert(inser_at_begi(test,12));
    printf("%d",test->count);
    //printf("%d\n",test->count);
    //printLinkedListData(test);
   split_list(test,3);

    return 0;
}
