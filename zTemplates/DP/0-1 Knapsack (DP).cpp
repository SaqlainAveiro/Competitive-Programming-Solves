#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define fr1(i,x,n) for(i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);

    pf("Enter the number of items and the capacity of the bag = ");

    sf2(n,m);

    lli profit[n+1]={0},weight[n+1]={0},knapsack[n+1][m+1];    //Initializing the Profit and Weight array

    pf("\n\nNow enter the profit and weight of each item : \n\n");

    fr(i,n)     sf2(profit[i],weight[i]);

    x=0;

    fr1(i,x,n)
    {
        fr1(j,x,m)
        {
            if(i==0 || j==0)    knapsack[i][j]=0;

            else if(weight[i] <= j)     knapsack[i][j] = max( profit[i] + knapsack[ i-1 ][ j-weight[i] ] , knapsack[ i-1 ][ j ] );

            else knapsack[i][j]=knapsack[ i-1 ][ j ];
        }
    }
    pf("\n\nThe highest possible profit is : %lld\n",knapsack[n][m]);
}
