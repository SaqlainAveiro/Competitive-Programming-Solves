#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

void DFS(lli source , vector<lli> vr[] , lli visited[])
{
    visited[source]=1;

    fr1(k,vr[source].size())
    {
        lli y=vr[source][k-1];

        //cost[y]=min(cost[source]+1,cost[y]);

        if(visited[y]==0)  DFS(y,vr,visited);
    }
}


int main()
{

    //FastIO;

    //read(in);     write(out);

    sf1(t);

    while(t--)
    {
        lli visited[len]={0},cost[len]={INT_MAX};

        vector<lli>vr[len];

        sf2(n,m);

        fr1(i,m)
        {
            sf2(p,q);
            vr[p].push_back(q);
            vr[q].push_back(p);
        }

        pf("Adjacency List = \n");

        fr1(i,n)
        {
            pf("%lld -> ",i);

            fr1(j,vr[i].size())  pf("%lld ",vr[i][j-1]);

            pf("\n");
        }

        DFS(1,vr,visited);
    }
}
