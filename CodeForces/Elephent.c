#include<stdio.h>

int main()
{
    long long int i=5,w=0,count=0,n,sum=0,num=1;
    scanf("%lld",&n);
    sum=n/5;
    count=count+sum;

    if(n%5==0)
    {
        printf("%d\n",count);
    }
    else
    {
        printf("%d\n",count+1);
    }
}
