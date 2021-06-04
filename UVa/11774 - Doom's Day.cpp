#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int a,b,c,i,j,k,l,t;

    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&a,&b);

        if(b%a!=0 || a>b)
        {
            printf("-1\n");
        }
        else if(b%a==0)
        {
            printf("%lld %lld\n",a,b);
        }

    }
}
