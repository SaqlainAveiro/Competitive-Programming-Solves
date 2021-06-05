#include<stdio.h>

int main()
{
    long long int b,sum=0;
    scanf("%lld",&b);
    if(b%2==0)
    {
        sum=b/2;
        printf("%lld",sum);
    }
    else
    {
        sum=b+1;
        sum=sum/2;
        sum=sum*(-1);
        printf("%lld",sum);
    }

}
