#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b )
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    long long int t,n,a,b,sum,i,j;

    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld",&a,&b);

        sum=gcd(a,b);

        //printf("\nGCD = %lld\n",sum);

        if(sum>1)
        {
            printf("Infinite\n");
        }
        else printf("Finite\n");
    }
}
