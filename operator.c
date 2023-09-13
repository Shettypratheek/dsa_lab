#include <stdlib.h>
#include <stdio.h>
#include "header.h"

List *initialise()
{
    List*my_list;
    my_list=(List*)malloc(sizeof(List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;
    return my_list;
}
Node *get_node(int data)
{
    Node *my_node;
    my_node=(Node*)malloc(sizeof(Node));
    my_node->data=data;
    my_node->ptr=NULL;
    return my_node;
}
int inser_at_begi(List*my_list,int data)
{
Node *new_node=get_node(data);
    if(new_node==NULL) return FAILED;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else{
        new_node->ptr=my_list->head;
        my_list->head=new_node;
    }
    my_list->count++;
    return SUCCESS;
}

int insert_data_end(List*my_list,int data)
{
    Node *new_node=get_node(data);
    if(new_node==NULL) return FAILED;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else{
        my_list->tail->ptr=new_node;
        my_list->tail=new_node;
    }
    my_list->count++;
    return SUCCESS;
}
int insert_after_data(List *my_list,int data,int element)
{
   Node *new_node,*temp;
   if(my_list->count==0) return FAILED;
   if(my_list->tail->data==element) return insert_data_end(my_list,data);

   for(temp=my_list->head;temp!=NULL && temp->data!=element;temp=temp->ptr);
   if(temp==NULL) return FAILED;
    new_node=get_node(data);
   new_node->ptr=temp->ptr;
   temp->ptr=new_node;

    my_list->count++;
    return SUCCESS;
}
void printLinkedListData(List *my_list) {
    Node *temp = my_list->head;

    printf("Linked List Data: ");

    while (temp != NULL) {
        printf("\n%d", temp->data);
        temp = temp->ptr;
    }

    printf("\n");
}
int search_list(List *my_list,int element)
{
    Node *temp;
    for(temp=my_list->head;temp!=NULL;temp=temp->ptr)
        if(temp->data==element) return 1;
    return 0;

}
int delet_at_begi(List *my_list)
{
    Node *temp;
    if(my_list->count==0) return FAILED;
    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
        my_list->count=0;
        return DELETED;
    }
    else{
        temp=my_list->head;
        my_list->head=my_list->head->ptr;
        free(temp);
    }
    my_list->count--;
    return DELETED;
    }
int delet_at_end(List *my_list)
{
    Node *temp;
    Node *previous=NULL;
    if(my_list->count==0) return 0;
    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
        my_list->count=0;
        return DELETED;
    }
    else{
        temp=my_list->head;
        while(temp->ptr!=NULL){
                previous=temp;
            temp=temp->ptr;
            }
        free(temp);
        my_list->tail=previous;
        my_list->tail->ptr=NULL;

    }
    my_list->count--;
    return DELETED;
}
int delete_element(List*my_list,int element)
{
    Node*temp,*previous=NULL;
    if(my_list->count==0) return 0;
    temp=my_list->head;

    while(temp->data!=element)
    {
    previous=temp;
    temp=temp->ptr;
    }
    if(temp==NULL) return FAILED;
    if(temp->ptr==NULL){
        my_list->tail=previous;
        my_list->tail->ptr=NULL;
        free(temp);
        my_list->count--;
        return DELETED;
    }
    previous->ptr=temp->ptr;
    free(temp);
    my_list->count--;
    return DELETED;

}
int insert_at_position(List*my_list,int data,int pos)
{
    Node *new_node=get_node(data);
    Node *temp;
    int i=1;
    temp=my_list->head;
    while(i<pos-1){
        temp=temp->ptr;
        i++;
        }
    if(temp->ptr==NULL){
    temp->ptr=new_node;
    new_node->ptr=NULL;
    my_list->tail=new_node;
    my_list->count++;
    return SUCCESS;
        }
    new_node->ptr=temp->ptr;
    temp->ptr=new_node;
    my_list->count++;
    return SUCCESS;

}
List* free_list(List*my_list)
{
    Node *temp;
    while(temp!=NULL){
        temp=my_list->head;
        my_list->head=my_list->head->ptr;
        free(temp);
    }
    free(my_list);
    return NULL;
}
int merge_list(List*my_list1,List*my_list2)
{
    if(my_list1->count==0 && my_list2->count==0) return FAILED;
    
    else{
        my_list1->tail->ptr=my_list2->head;
        my_list1->tail=my_list2->tail;
        my_list1->tail->ptr=NULL;

    }
    free(my_list2);
    my_list1->count=my_list1->count+my_list2->count;
    return SUCCESS;
}


