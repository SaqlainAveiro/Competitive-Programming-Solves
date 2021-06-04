/*
Author                         : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name             : LightOJ -1006 - Hex-a-bonacci
*/

#include<bits/stdc++.h>

using namespace std;

long long int t,a,b,c,d,e,f,n,i,j,k,l,m,x,y,z;

long long int dp[100001];

long long int fn(long long int n )
{
    if( n == 0 )
        return a;
    if( n == 1 )
        return b;
    if( n == 2 )
        return c;
    if( n == 3 )
        return d;
    if( n == 4 )
        return e;
    if( n == 5 )
        return f;
    if( dp[n])
        return dp[n];

    return dp[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ) % 10000007;

}

int main()
{
    long long int caseno = 0, cases , n;

    scanf("%lld", &t);

    for(j=0 ; j<t ; j++)
    {
        for(i=0 ; i<100001 ; i++)
        {
               dp[i]=0;
        }

        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);

        printf("Case %lld: %lld\n", j+1, fn(n) % 10000007);
    }
    return 0;
}


