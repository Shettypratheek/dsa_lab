#define MAX_SIZE 20
struct _student_
{
    int roll_no;
    char name[MAX_SIZE];
    int age;
    float marks;

};
typedef struct _student_ Student;

struct _complex_
{
    float real;
    float imaginary;
};
typedef struct _complex_ Complex;
struct _grocery_
{
    int quantity;
    float price;
};
typedef struct _grocery_ Grocery;

struct _array_
{
    int c_size;
    int t_size;
    int *array;
};
typedef struct _array_ Array;
void inputStudentdetails(Student *);
void printStudentdetails(Student );
Complex AddComplex(Complex,Complex);
Complex SubComplex(Complex,Complex);
Complex MultComplex(Complex,Complex);
void inputGrocerydetails(Grocery *);
float sumofprice(Grocery *,int);
float discount(Grocery *,int );
int discountper(float);
float discountamt(Grocery *,int );
void totalitem(Grocery *,int);
int splitarray(Array *,int *,int ,int,int );
int display(Array *,int );
