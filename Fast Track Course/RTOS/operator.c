
int odd_even(int n,int*odd,int*even)
{
    int i;
    *even=0;
    *odd=0;

    for(i=1;i<=n;i++)
    {
        if(i%2==0){
            (*even)++;
        }

        else{
            (*odd)++;
        }


    }

    return 0;
}
