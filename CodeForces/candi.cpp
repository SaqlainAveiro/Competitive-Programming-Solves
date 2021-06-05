#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,t,i,j,k,l,n,sum=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        sum=(a+b+c)/2;
        printf("%lld\n",sum);
        sum=0;
    }
}
