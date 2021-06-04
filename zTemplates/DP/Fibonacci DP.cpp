#include<bits/stdc++.h>

//Memoization dp , Topdown dp, Recursion

using namespace std;

long long int dp[10000];

long long int fibo(long long int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    dp[n]=fibo(n-1)+fibo(n-2);

    return dp[n];

}

int main()
{
    long long int a,b,p,c,d,sum=1,m,n;

    for(long long int i=0;i<10000;i++)
    {
        dp[i]=-1;
    }

    scanf("%lld",&n);
    sum=fibo(n);
    printf("Result = %lld\n",sum);
}
