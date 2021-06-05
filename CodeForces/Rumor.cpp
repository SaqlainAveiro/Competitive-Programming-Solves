#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli visited[len],cost[len];

vector<lli>ar[len];

void DFS(lli source)
{
    visited[source]=1;      x=min(x,cost[source]);

    fr0(k,ar[source].size())
    {
        lli y=ar[source][k];      if(visited[y]==0)    DFS(y);
    }
}


int main()
{

    //FastIO;

    //read(in);

    sf2(n,m);

    fr1(i,n)    sf1(cost[i]),  visited[i]=0;    sum=0;

    fr1(i,m)   sf2(p,q),    ar[p].push_back(q)  ,   ar[q].push_back(p);

    fr1(i,n)
    {
        if(visited[i]==0)
        {
            x=INT_MAX;  DFS(i);   sum+=x;
        }
    }
    pf("%lld\n",sum);
}
