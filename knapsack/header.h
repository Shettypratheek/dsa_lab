#define FAILED 0
#define SUCCESS 1

struct _knapsackdata_
{
    float weight;
    float profit;
    float ratio;
    float fraction;
};
typedef struct _knapsackdata_ KnapData;

struct _node_
{
    KnapData *data;
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

List *initialise();
Node *get_node(KnapData data);
int insert_at_beg(List *,KnapData );
int insert_at_end(List *,KnapData);
void display(List *my_list);