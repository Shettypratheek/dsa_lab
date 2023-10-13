#include<Stdio.h>
#include<math.h>

#define SQUARE_ROOT(a) sqrt(a)
#define NATURAL_LOG(a) log(a)
#define COMMON_LOG(a) log10(a)
#define POWER(a,b) pow(a,b)
#define COS_VALUE(a) cos(a)
int binary_to_decimal(int binary_num)
{
int rem,base=1,decimal_num=0;
    while(binary_num>0)
    {
        rem=binary_num%10;
        decimal_num=decimal_num+rem*base;
        binary_num=binary_num/10;
        base=base*2;
            }
return decimal_num;
}
int decimal_to_binary(int decimal_num)
{
    int rem,binary_num=0,place=1;
    while(decimal_num>0)
    {
        rem=decimal_num%2;
        binary_num=binary_num+rem*place;
        decimal_num=decimal_num/2;
        place=place*10;
    }

    return binary_num;
}
void generatesequence(int n)
{
    int seq[n];
    seq[0]=0;
    seq[1]=0;
    seq[2]=1;
    printf("%d , %d , %d",seq[0],seq[1],seq[2]);
    for(int i=3;i<n;i++)
    {
        seq[i]=seq[i-1]+seq[i-2]+seq[i-3];
        printf(", %d",seq[i]);
    }
    printf("\n");

}
void sequence1(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("*\t");
        printf("\n");
    }
}
void sequence2(int n)
{
    int i,j;
    for(i=n;i>=0;i--)
    {
        for(j=i;j>=0;j--)
            printf("*\t");
       printf("\n");
    }
}
void sum_of_digit()
{
   int digit_1,digit_2,i;
   for(i=1;i<=9;i++)
   {
       digit_1=i;
       digit_2=9-i;
       if((digit_1+digit_2)==9)
       {
           printf("%d\n",digit_1*10+digit_2);
       }
   }

}
int recursive(int base,int exponent)
{
    if(exponent==0)
        return 1;
    else
        return base*recursive(base,exponent-1);

}
int factorial(int number)
{
    if(number==1 || number==0)
        return 1;
    else
        return number*factorial(number-1);
}
void mathematical_functions(int n)
{   int choice,base;
    printf("Menu\n");
    printf("1.Finding the square root of a number\n");
    printf("2.Finding the natural log of a number\n");
    printf("3.Finding the common logarithm of a number\n");
    printf("4.Finding the power  of a number\n");
    printf("5.Finding the cosine value of a number\n");
    printf("Enter Your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
           printf("%f", SQUARE_ROOT(n));
            break;
        case 2:
             printf("%lf",NATURAL_LOG(n));
            break;
        case 3:
            printf("%lf",COMMON_LOG(n));
            break;
        case 4:
            printf("Enter the base value\n");
            scanf("%d",&base);
            printf("%lf",POWER(base,n));
            break;
        case 5:
            printf("%lf",COS_VALUE(n));
            break;
        default:
            printf("Invalid Input\n");

    }

}
