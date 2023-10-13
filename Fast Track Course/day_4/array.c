#include<stdio.h>
#include<string.h>
#define START_INDEX 0
#define ARRAY_EMPTY 0
#define SUCCESS 1
#define NOT_FOUND 0
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}



void ascending_array(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }

    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
}
void descending_array(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
                swap(&arr[i],&arr[j]);
        }



}
/*void find_max_min(int arr[],int size,int *max,int *min)
{
    ascending_array(arr,size);
    for(int i=0;i<size;i++)
        printf("%d\t",arr[i]);
    *max=arr[size-1];
    *min=arr[START_INDEX];
}*/
int find_max_min(int arr[],int size,int *max,int *min)
{
    *max=*min=arr[START_INDEX];
    for(int i=0;i<size;i++){
        if(*max<arr[i]) *max=arr[i];
        if(*min>arr[i]) *min=arr[i];
    }
    return 1;
}
int search_element(int arr[],int size,int search_ele)
{
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==search_ele)
            return 1;
    }
    return 0;
}
void store_array(int arr[],int size)
{
    int i,j,count=0,tgt[10],flag;
    for(i=0;i<size;i++){
            flag=0;
        for(j=i+1;j<size;j++){
           if(arr[i]==arr[j]){
            flag=1;
            break;
           }
        }
        if(flag==0){
            tgt[count]=arr[i];
            count++;
           }

    }
   ascending_array(tgt,count);



}
int string_length(char str[])
{
    int i;
    while(str[i++]!='/0');
    return i-1;
}
void lower_to_upper(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
            *str=*str-32;
        *str++;
    }

}
void string_reverse(char *str)
{
    int i;
    int length=strlen(str);
    for(i=0;i<length/2;i++){

        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;

            }
}
int palindrome(char *str)
{
    char temp[strlen(str)];
    strcpy(temp,str);
    string_reverse(str);
    if(strcmp(temp,str)==0)
        return 1;
    return 0;
}
void string_concatenate(char *str_1,const char *str_2)
{
    int i,j;
    //printf("%d",strlen(str_2));
   for(i=0;i<strlen(str_2);i++)
    str_1[strlen(str_1)]=str_2[i];
   str_1[strlen(str_1)+i]='\0';
//printf("%s",str_1);

}
void string_con(char s1[],char s2[])
{
    printf("%d",strlen(s1));
    int len1=strlen(s1),len2=strlen(s2);
    printf("%d",sizeof(s1)/sizeof(s1[0]));
    //for(int i=0;i<len2;i++)
       // s1[len1+i]=s2[i];
}
void str_rvs(char *str)
{
    int i,temp;
    for(i=0;i<strlen(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;

    }
    printf("%s",str);
}
