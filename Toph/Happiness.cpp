#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        lli profit[n+1]={0},weight[n+1]={0},knapsack[n+1][m+1];    //Initializing the Profit and Weight array

        for(i=0 ; i<=n ; i++)
        {
            for(j=0 ; j<=m ; j++)
            {
                knapsack[i][j]=0;
            }
        }

        for(i=1 ; i<=n ; i++)
        {
            cin>>profit[i]>>weight[i];
        }

        for(i=1 ; i<=n ; i++)
        {
            for(j=1 ; j<=m ; j++)
            {
                /*if(i==0 || j==0)
                {
                    knapsack[i][j]=0;
                }*/
                if(weight[i] <= j)
                {
                    knapsack[i][j]=max(profit[i]+knapsack[i-1][j-weight[i]] , knapsack[i-1][j]);
                }
                else knapsack[i][j]=knapsack[i-1][j];
            }
        }
        cout<<knapsack[n][m]<<"\n";
    }
}
