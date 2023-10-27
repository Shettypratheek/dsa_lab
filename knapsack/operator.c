#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"

List *initialise()
{
    List *my_list;
    my_list=(List*)malloc(sizeof(List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;
    return my_list;
}

Node *get_node(KnapData data)
{
    Node *my_node;
    my_node=(Node*)malloc(sizeof(Node));
    my_node->data=(KnapData*)malloc(sizeof(KnapData));
    if(my_node!=NULL){
        my_node->data->fraction=0;
        my_node->ptr=NULL;
        my_node->data->weight=data.weight;
        my_node->data->profit=data.profit;
        my_node->data->ratio=data.profit/data.weight;

    }
    return my_node;
}
int insert_at_beg(List *my_list,KnapData data )
{
    Node *new_node=get_node(data);
    if(new_node==NULL)
        return FAILED;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else{
        new_node->ptr=my_list->head;
        my_list->head=new_node;
    }
    //my_list->count++;
    return SUCCESS;

}
int insert_at_end(List *my_list,KnapData data)
{
    Node *new_node=get_node(data);
    if(new_node==NULL)
        return FAILED;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else{
        my_list->tail->ptr=new_node;
        my_list->tail=new_node;
    }
    //my_list->count++;
    return SUCCESS;

}

void display(List *my_list)
{
    Node *temp=my_list->head;
    while(temp!=NULL){
        printf("%f %f %f\n",temp->data->weight,temp->data->profit,temp->data->ratio);
        temp=temp->ptr;
    }


}
int insert_data(List *my_list,KnapData data)
{
    Node *new_node=get_node(data);
    if(new_node==NULL)
        return FAILED;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    if(my_list->count==1 && new_node->data->ratio<my_list->tail->data->ratio)
        assert(insert_at_end(my_list,data));
    else{
        if(new_node->data->ratio>my_list->head->data->ratio)
            assert(insert_at_beg(my_list,data));
        else if(new_node->data->ratio<my_list->tail->data->ratio)
            assert(insert_at_end(my_list,data));
        else if(new_node->data->ratio<my_list->head->data->ratio && new_node->data->ratio > my_list->tail->data->ratio){
            Node *temp,*prev;
            temp=my_list->head;
            while(temp!=NULL){
                if(temp->data->ratio < my_list->head->data->ratio)
                    break;
                prev=temp;
                temp=temp->ptr;
            }
            
            new_node->ptr=prev->ptr;
            prev->ptr=new_node;
        }
    }
    my_list->count++;
    return SUCCESS;

}
float calculation(List *my_list,float   *weight)
{
    Node *temp=my_list->head;
    float profit=0;
    while(temp!=NULL){
        if((temp->data->weight)< (*weight)){
            profit=profit+temp->data->profit;
            printf("%f\n",profit);
            }
        else {
            profit=profit+(*weight)*temp->data->ratio;
            printf("%f\n",profit);
            break;
        }
            
       (* weight)=(*weight)-temp->data->weight;
        temp=temp->ptr;
    }
    return profit;

}
