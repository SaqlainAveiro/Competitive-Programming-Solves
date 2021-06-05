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

vector<lli>vr[len];
map<lli,lli>mp;
lli visited[len];

void DFS(lli source, lli sum, lli ans)
{
    visited[source]=1;

    if(mp[source]==1)    sum++;

    else    sum=0;

    ans=max(ans,sum);

    if(ans>c)   return;

    lli cat=0;

    fr0(k,vr[source].size())
    {
        lli y=vr[source][k];

        if(visited[y]==0)       cat=1,     DFS(y,sum,ans);
    }

    if(cat==0)      total++;
}


int main()
{

    //FastIO;

    //read(in);

    sf2(m,c);

    fr1(i,m)     sf1(x),     mp[i]=x;

    fr1(i,m-1)     sf2(p,q),        vr[p].push_back(q),   vr[q].push_back(p);

    DFS(1,0,0);

    pf("%lld\n",total);
}
