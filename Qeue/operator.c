#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Queue *initialise(int size)
{
    Queue *my_queue;
    my_queue=(Queue*)malloc(sizeof(Queue));
    my_queue->front=my_queue->rear=-1;
    my_queue->size=size;
    my_queue->data=(int *)malloc(sizeof(int)*size);
    return my_queue;
}

int push(Queue *my_queue,int data)
{
    if(my_queue->rear==-1 && my_queue->front==-1){
        my_queue->front=my_queue->rear=0;
        *(my_queue->data+my_queue->rear)=data;
    }
    else if((my_queue->rear+1)%my_queue->size==my_queue->front)
        printf("Queue is full\n");
    else{
        my_queue->rear=(my_queue->rear+1)%my_queue->size;
        *(my_queue->data+my_queue->rear)=data;
    }
    return SUCCESS;
}
void display(Queue*my_queue)
{
    int i=my_queue->front;
    if(my_queue->front==-1 && my_queue->rear==-1)
        printf("Queue is empty\n");
    while(i!=my_queue->rear){
        printf("%d\n",my_queue->data[i]);
        i=(i+1)%my_queue->size;
    }
    printf("%d\n",my_queue->data[my_queue->rear]);
}
int pop(Queue*my_queue)
{
    if(my_queue->front==-1 && my_queue->rear==-1)
        printf("Queue is empty\n");
    else{
        printf("Popped item is %d\n",my_queue->data[my_queue->front]);
        my_queue->front=(my_queue->front+1)%my_queue->size;
    }
    return SUCCESS;
}
int peek(Queue*my_queue)
{
    printf("Element in the top of Queue is %d\n",my_queue->data[my_queue->front]);
    return 1;
}
