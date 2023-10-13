#include<stdio.h>
#define amicable 1
#define namicable 0
#define pi 3.14159
unsigned int sum_of_digit(unsigned int number)
{
    int out=0;
    while(number>0)
    {
        out=out+number%10;
        number=number/10;


    }
    return out;
}
unsigned int reversing(unsigned int input)
{
    int result=0;
    while(input>0)
    {
        result=result*10+input%10;
        input=input/10;

    }

    return result;
}
 unsigned int occurance_of_digit( unsigned int input,unsigned int digit)
{
    int count=0,result;
    while(input>0)
    {
        result=input%10;
        input=input/10;
        if(result==digit) count++;

    }
    return count;
}
int palindrome(int number)
{  // 1234545
    int temp=number,out=0;
    while(number>0){
        out=out*10+number%10;
        number=number/10;}
        if(out==temp)
            return 1;
        else return 0;
}
int is_prime(int input)
{   int i,flag=0;
    for(i=2;i<input;i++)
    {
        if(input%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 0;
    }
    else return 1;
}
void n_prime(int N)
{
    int count=0,i=2;
    while(count<N)
    {
        if(is_prime(i))
        {
            printf("%d\t",i);
            count++;
        }
        i++;
    }
}
int number_series(unsigned int n)
{
    int i,term=1;
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",term);
        if(i<n) printf("+");
        term=term*10+1;

    }
    return 1;
}
/*int array_interaction(int arr1[],int arr2[],int size)
{
    int i,j,arr3[]={0};
    for(i=0;i<=size;i++){
        for(j=0;j<=size;j++){
            if(arr1[i]==arr2[j])
                printf("%d\n",arr2[j]);

            }

    }


    return 0;

}*/
unsigned int  armstrong_number(unsigned int num)
{
    int sum=0,out=0,temp=num;
    while(num>0)
    {
        out=num%10;
        sum=sum+out*out*out;
        num=num/10;
    }

    if(temp==sum) return 1;
    else return 0;
}


int amicable_input(unsigned int input)
{
     int i,sum=0;
    for(i=1;i<input;i++)
    {
        if(input%i==0)
            sum=sum+i;
    }
    return sum;
}
int amicable_check(unsigned int input)
{
    if(input==amicable_input(amicable_input(input)))
        return amicable;
    else return namicable;
}
int operation(int num_1,int num_2)
{   int choice;
    printf("\nMenu\n");
    printf("1.Add two numbers\n");
    printf("2.Sbutract two numbers\n");
    printf("3.Multiplication two numbers\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("%d",num_1+num_2);
        return num_1+num_2;
        break;
    case 2:
        printf("%d",num_1-num_2);
        return num_1-num_2;
        break;
    case 3:
        printf("%d",num_1*num_2);
        return num_1*num_2;
        break;
    default :
        printf("Invalid Input");
        return 1;

    }

}
float volume_of_cube(float side)
{
    return side*side*side;
}
float volume_of_cuboid(float length,float width,float height)
{
    return length*width*height;
}
float volume_of_cylinder(float radius,float height)
{
    return pi*radius*radius*height;
}
float volume_of_sphere(float radius)
{
    return (4/3)*pi*radius*radius*radius;
}
float volume_of_cone(float radius,float height)
{
    return (1/3)*pi*radius*radius*height;
}
int volume()
{
    int choice;
    float side,height,width,radius,length;
    printf("Enter the shape you want find volume of:\n");
    printf("1.Volume of cube\n");
    printf("2.Volume of cuboid\n");
    printf("3.Volume of cylinder\n");
    printf("4.Volume of sphere\n");
    printf("5.Volume of cone\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("Enter the side.\n");
        scanf("%f",&side);
        printf("The volume of cube is %f:",volume_of_cube(side));
        break;
     case 2:
        printf("Enter the length,width and height.\n");
        scanf("%f %f %f",&length ,&width,&height);
        printf("The volume of cuboid is %f:",volume_of_cuboid(length,width,height));
        break;
     case 3:
        printf("Enter the radius and height .\n");
        scanf("%f %f",&radius,&height);
        printf("The volume of cylinder is %f:",volume_of_cylinder(radius,height));
        break;
     case 4:
        printf("Enter the radius.\n");
        scanf("%f",&radius);
        printf("The volume of sphere is %f:",volume_of_sphere(radius));
        break;
     case 5:
        printf("Enter the radius and height.\n");
        scanf("%f %f",&radius,&height);
        printf("The volume of cone is %f:",volume_of_cone(radius,height));
        break;
     default:
        printf("Invalid Input");
        break;
    }
    return 0;

}
float electricity_bill(float units)
{
    float total_charge=0;
    if(units<=200)
        total_charge=units*5;
    else if(units<=300)
        total_charge=200*5+(units-200)*7;
    else if(units>300)
       total_charge=200*5+100*7+(units-300)*10;
    return total_charge;
}
