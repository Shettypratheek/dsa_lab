#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void inputStudentdetails(Student *stud)
{
    printf("Enter the name:\n");
    scanf("%s",stud->name);

    printf("Enter the roll:\n");
    scanf("%d",&stud->roll_no);

    printf("Enter the age:\n");
    scanf("%d",&stud->age);


    printf("Enter the marks:\n");
    scanf("%f",&stud->marks);
}
void printStudentdetails(Student stud)
{
    printf("Roll no:%d\n",stud.roll_no);
    printf("Name:%s\n",stud.name);
    printf("Age:%d\n",stud.age);
    printf("Marks:%f\n",stud.marks);
}
Complex AddComplex(Complex num1,Complex num2)
{
    Complex result;
    result.real=num1.real+num2.real;
    result.imaginary=num1.imaginary+num2.imaginary;
    return result;
}
Complex SubComplex(Complex num1,Complex num2)
{
    Complex result;
    result.real=num1.real-num2.real;
    result.imaginary=num1.imaginary-num2.imaginary;
    return result;
}
Complex MultComplex(Complex num1,Complex num2)
{
    Complex result;
    result.real=num1.real*num2.real-num1.imaginary*num2.imaginary;
    result.imaginary=num1.real*num2.imaginary+num1.imaginary*num2.real;
    return result;
}
void inputGrocerydetails(Grocery *item)
{     printf("Enter the item Price:\n");
    scanf("%f",&item->price);

     printf("Enter the item quantity:\n");
    scanf("%d",&item->quantity);

}
float sumofprice(Grocery *item,int num)
{
    float sum=0;
    for(int i=0;i<num;i++)
        sum=sum+item[i].price;
    return sum;
}
float discount(Grocery *item,int num)
{
    float total=sumofprice(item,num);
    if(total<1000)
        return total-total*0.05;
    else if(total>=1000 && total <5000)
        return total-total*0.1;
    else
        return total-total*0.15;
}
int discountper(float total)
{
    if(total<1000)
        return 5;
    else if(total>=1000 && total<5000)
        return 10;
    else
        return 15;
}
float discountamt(Grocery *item,int num)
{
    float amt=sumofprice(item,num),disc_amt;
    if(amt<1000)
        disc_amt= amt*0.05;
    else if(amt>=1000 && amt <5000)
        disc_amt= amt*0.1;
    else disc_amt= amt*0.15;
    return disc_amt;
}
void totalitem(Grocery *item,int num)
{
    printf("Item\tPrice\t\tQuantity\tSubtotal\n");
    printf("----\t-----\t\t-------\t\t---------\n");
    for(int i=0;i<num;i++)
        printf("Item %d\t %.2f\t\t %d\t\t %.2f\n",i+1,item[i].price,item[i].quantity,item[i].price);
    printf("\n");
    printf("----------------------------------------------------\n");
    printf("TOTAL %f\n",sumofprice(item,num));
    printf("Discount %d%% - %.2f\n",discountper(discount(item,num)),discountamt(item,num));
    printf("----------------------------------------------------\n");
    printf("\n");
    printf("GRAND TOTAL %f",discount(item,num));


}
int splitarray(Array *my_arr,int *originaldata,int split_size,int total_size,int parts)
{

    for(int i=0;i<parts;i++){
        int startindex=i*parts;
        int rem=total_size-startindex;
        int size=(rem<parts)?rem:parts;

        my_arr[i].c_size=size;

        my_arr[i].t_size=total_size;
        my_arr[i].array=(int*)malloc(size*sizeof(int));
        for(int j=0;j<size;j++)
            my_arr[i].array[j]=originaldata[startindex+j];

    }

    return 0;
}
int display(Array *my_arr,int parts)
{
    for(int i=0;i<parts;i++){
        for(int j=0;j<my_arr[i].c_size;j++)
            printf("%d\t",my_arr[i].array[j]);
        printf("\n");
    }
}
