#include<bits/stdc++.h>

using namespace std;

long long int dp[100000000];

long long int facto_recursive(long long int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    dp[n]=n*facto_recursive(n-1);

    return dp[n];

}

/*long long int facto_iterative(long long int n)
{
    dp[0]=dp[1]=1;

    for(long long int i=2;i<=n;i++)
    {
        dp[i]=i*dp[i-1];
    }
}*/

int main()
{
    long long int a,b,p,c,d,sum=1,m,n;

    for(long long int i=0 ; i<100000000 ; i++)
    {
        dp[i]=-1;
    }

    scanf("%lld",&n);

    sum=facto_recursive(n);

    //sum=facto_iterative(n);

    printf("Result = %lld\n",dp[n]);
}


