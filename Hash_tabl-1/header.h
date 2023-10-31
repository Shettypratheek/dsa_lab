#define FAILED 0
#define SUCCESS 1
#define SIZE 10
#define MAX_SIZE 20
struct _node_
{
int data;
struct _node_ *ptr;
};



typedef struct _node_ Node;



struct _linkedlist_
{
Node *head;
Node *tail;
int count;
};
typedef struct _linkedlist_ List;



struct _hashtable_
{
    List *hashaddress;
};
typedef struct _hashtable_ Hash;



Hash *initialise_hash();
List *initialise_list();
Node *get_node(int data);
int insert_at_begi(Hash*,int );
int key_generation(int data);
int data_appending(Hash *my_hash[],char data[]);
void display(Hash *my_hash);
int insert_data(Hash *my_hash[],int data);
