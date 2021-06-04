#include<bits/stdc++.h>

using namespace std;

long long H(long long int n)
{
    long long res = 0;

    for( int i = 1; i <= n; i=i+1 )
        {
            res = (res + n/i);
        }
    return res;
}

int main()
{
    long long int i,j,k,l,m,t,n,sum=0;

    scanf("%lld",&t);

    for(j=1 ; j<=t ; j++)
    {
        sum=0;
        scanf("%lld",&n);
        sum=H(n);
        printf("%lld\n",sum);
    }
}
