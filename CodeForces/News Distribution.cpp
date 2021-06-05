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

lli visited[2*500005]={0},result[2*500005]={0};

vector<lli>vr[2*500005];

lli DFS(lli source)
{
    if(visited[source]==1) return 0;
    
    visited[source]=sum;

    lli xp=0;   if(source<n)     xp=1;

    fr1(k,vr[source].size())
    {
        lli y=vr[source][k-1];

        if(visited[y]==0)    xp+=DFS(y);
    }
    return xp;
}


int main()
{

    //FastIO;

    //read(in);     write(out);

    sf2(n,m);

    fr0(i,m)
    {
        sf1(p);   

        fr0(j,p)    sf1(x),  vr[x-1].push_back(i+n),   vr[i+n].push_back(x-1);
    }

    fr0(i,n)
    {
        if(visited[i]==0)
        {
            sum++;  result[sum]=DFS(i);
        }
        pf("%lld ",result[ visited[i] ]);
    }
    pf("\n");
}