#include<stdio.h>

int main()
{
    long long int s,a,b,c,sum=0,i,j,k,t,x;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        k=s/c;
        j=s/a;
        x=j*b;
        sum=x+k;
        printf("%lld\n",sum);

    }
}
