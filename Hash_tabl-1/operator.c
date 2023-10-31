#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"



Hash *initialise_hash()
{
    Hash *my_hash;
    my_hash=(Hash*)malloc(sizeof(Hash));
    if(my_hash!=NULL)
        my_hash->hashaddress=initialise_list();
    return my_hash;
}
List *initialise_list()
{
    List *my_list;
    my_list=(List*)malloc(sizeof(List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;
    return my_list;
}
Node *get_node(int data)
{
    Node *my_node;
    my_node=(Node*)malloc(sizeof(Node));
    if(my_node!=NULL){
    my_node->data=data;
    my_node->ptr=NULL;
    }
    return my_node;



}
int insert_data(Hash *my_hash[],int data)
{
    int key=key_generation(data);
    Node *new_node=get_node(data);
    if(my_hash[key]->hashaddress->count==0)
        my_hash[key]->hashaddress->head=my_hash[key]->hashaddress->tail=new_node;
    else{
        my_hash[key]->hashaddress->tail->ptr=new_node;
        my_hash[key]->hashaddress->tail=new_node;
    }
    my_hash[key]->hashaddress->count++;
    return SUCCESS;


}
int key_generation(int data)
{
    int key;
   key=data%SIZE;
   return key;
}

void display(Hash *my_hash)
{
    Node*temp=my_hash->hashaddress->head;
   
    while(temp!=NULL)
    {
        printf(" %d\t",temp->data);
        temp=temp->ptr;
    }
    
    printf("\n");


}
