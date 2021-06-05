#include<stdio.h>

int main()
{
    long long int sum=0,num,i,k,n;

    scanf("%lld %lld",&n,&k);

    if(n%2==0)
    {
        num=n/2;

        if(k>num)
        {
            num=k-num;
            sum=num*2;
        }
        else if(k<=num)
        {
            sum=k*2-1;
        }
    }
    else
    {
        num=n/2+1;

       if(k>num)
        {
            num=k-num;
            sum=num*2;
        }
        else if(k<=num)
        {
            sum=k*2-1;
        }
    }
    printf("%lld\n",sum);

}
