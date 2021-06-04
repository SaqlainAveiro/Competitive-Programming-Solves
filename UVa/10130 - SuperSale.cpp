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

    sf1(t);

    fr(a,t)
    {
        sf1(n);

        lli profit[n+1]={0},weight[n+1]={0};    //Initializing the Profit and Weight array

        map<lli,lli>mp;

        fr(i,n)     sf2(profit[i],weight[i]);

        sf1(m);

        sum=total=res=ans=0;

        fr(k,m)
        {
            sf1(w);

            if(mp[w]>0)
            {
                sum+=mp[w];
                continue;
            }

            lli knapsack[n+1][w+1];

            x=0;

            fr1(i,x,n)
            {
                fr1(j,x,w)
                {
                    if(i==0 || j==0)    knapsack[i][j]=0;

                    else if(weight[i] <= j)     knapsack[i][j] = max( profit[i] + knapsack[ i-1 ][ j-weight[i] ] , knapsack[ i-1 ][ j ] );

                    else knapsack[i][j]=knapsack[ i-1 ][ j ];
                }
            }

            //pf("Profit is : %lld\n",knapsack[n][w]);

            mp[w]=knapsack[n][w];

            sum+=knapsack[n][w];
        }
        pf("%lld\n",sum);
    }
}
