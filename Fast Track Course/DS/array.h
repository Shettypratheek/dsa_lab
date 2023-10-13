#define MAX_SIZE 20
#define NAME_SIZE 30
struct _employee_
{
    int id;
    char name[NAME_SIZE];
    float salary;
};
typedef struct _employee_ Employee
struct _array_
{
   Employee  array[MAX_SIZE];
    int c_size,t_size;
};
typedef struct _array_ Array;



Array initialization(int);
Array insert_data(Array,int);
int search_element(Array,int);
