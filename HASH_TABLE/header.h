#define FAILED 0
#define SUCCESS 1
#define SIZE 26
#define MAX_SIZE 20
struct _node_
{
char data[MAX_SIZE];
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
Node *get_node(char data[]);
int insert_at_begi(Hash*,char );
int key_generation(char data[]);
int data_appending(Hash *my_hash[],char data[]);
void display(Hash *my_hash);
int insert_data(Hash *my_hash[],char data[]);
