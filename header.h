#define FAILED 0
#define SUCCESS 1
#define DELETED 1

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

List *initialise();
Node *get_node(int data);
int inser_at_begi(List*,int );
int insert_data_end(List *,int);
int insert_after_data(List*,int,int);
void printLinkedListData(List *my_list);
int search_list(List *my_list,int element);
int delet_at_begi(List*);
int delet_at_end(List*);
int delete_element(List*,int);
int insert_at_position(List*,int,int);
List* free_list(List*my_list);
int merge_list(List*my_list1,List*my_list2);
