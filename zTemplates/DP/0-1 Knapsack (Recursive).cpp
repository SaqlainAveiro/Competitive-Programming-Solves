#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

lli dp[2001][2001],cost[2000],weight[2000],w,capacity;

lli knapsack(lli i,lli w)
{
    lli p=0,q=0;

    if(i==0)
    {
        return 0;
    }

    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }

    if(w+weight[i]<=capacity)
    {
        p=cost[i]+knapsack(i+1,w+weight[i]);
    }
    else
    {
        p=0;
    }

    q=knapsack(i+1,w);

    dp[i][w]=max(p,q);

    return dp[i][w];
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    freopen("Input.txt","r",stdin);

    memset(dp,-1,sizeof(dp));

    cin>>capacity>>n;

    for(i=1 ; i<=n ; i++)
    {
        cin>>weight[i]>>cost[i];
    }
    total=knapsack(1,0);

    cout<<total<<"\n";

}
