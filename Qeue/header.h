#define SUCCESS 1
#define FAIL 0
#define SIZE 7


struct _queue_
{
    int *data;
    int front,rear;
    int size;
};
typedef struct _queue_ Queue;

Queue *initialise(int);
int push(Queue *,int);
void display(Queue*);
int pop(Queue*my_queue);
int peek(Queue*my_queue);
