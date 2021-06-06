#include<stdio.h>

int main()
{
    long long int a,b,i,k,sum=0;
    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %lld to %lld is -> %lld;\n",a,b,sum);
}
