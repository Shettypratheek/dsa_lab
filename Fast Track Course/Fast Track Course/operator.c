#include<stdlib.h>
#include<stdio.h>
#define PI 3.14159

int addition(int x,int y)
{
    return x+y;
}

int subtraction(int x,int y)
{
    return x-y;
}
int multiplication(int x,int y)
{
    return x*y;
}
int division(int x,int y)
{
    if(y==0) return -1;
    return x/y;
}
char upper_to_lower(char value)
{
    if(value >=65 && value<=90){
           return value+32;
            }

}
double area(double radius)
{

    return 3.14159*radius*radius;
}
unsigned char difference(char input1,char input2 )
{
    return input2-input1;
}
double celsius_to_fahrenheit(double celsius)
{
    return (celsius*1.8)+32;
}
int odd_even(int number)
{
    if((number%2)==0)
        return 1;
    else
        return -1;
}
int leap_year(int year)
{
    if( year%400==0 )
        return 1;
    else if(year%100 == 0)
        return -1;
    else
        return 1;
    return 0;
}
int shift_operator(int N)
{
    return 1<<N;
}
char int_char(char input)
{
    if((input>='A' && input<='Z') || (input>='a' && input<='z'))
        return 1;
    else if(input>='0' && input<='9')
        return -1;
    else
        return'#';
}
void random(int number1,int number2)
{
printf("The sum of %d and %d is %d",number1,number2,number1+number2);
}
