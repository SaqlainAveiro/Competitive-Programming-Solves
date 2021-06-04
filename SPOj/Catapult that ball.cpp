#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

const lli MAXN = 105000;
const lli MAXLOG = 20;

lli ar[MAXN];

lli table[MAXLOG][MAXN];

lli logs[MAXN]; // logs[i] means such maximum p that 2^p <= i

void computeLogs()
{
    logs[1] = 0;

    for (i = 2; i <= n; i++)
    {
        logs[i] = logs[i / 2] + 1;
    }
}

void buildSparseTable()
{
    for (lli i = 0 ; i <= logs[n] ; i++)
    {
        lli curLen = 1 << i; // 2^i

        for (lli j = 0 ; j + curLen <= n ; j++)
        {
            if (curLen == 1)
            {
                table[i][j] = ar[j];
            }
            else
            {
                table[i][j] = max(table[i - 1][j] , table[i - 1][j + (curLen / 2)]);
            }
        }
    }
}

lli getMax(lli l, lli r)
{
      lli p = logs[r - l + 1];

      lli pLen = 1 << p; // 2^p

      return max(table[p][l] , table[p][r - pLen + 1]);
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>m;

    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    computeLogs();

    buildSparseTable();

    sum=0;

    for(i=1 ; i<=m ; i++)
    {
        cin>>x>>y;

        total=getMax(x-1,y-2);

        if(abs(x-y)<=1 || ar[x-1]>=total)
        {
            sum++;
        }
    }
    cout<<sum<<"\n";
}

