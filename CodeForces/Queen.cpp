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

lli visited[len]={0},mp[len]={0};

vector<lli>vr[len],nodes;

lli DFS(lli source,lli parent)
{
    lli graph=0;
    
    if(mp[source]==1)   graph=1;

    fr1(k,vr[source].size())
    {
        lli child=vr[source][k-1];

        if(child!=parent)    graph&=mp[child],     DFS(child,source);
    }
    if(graph)   nodes.push_back(source);

    return graph;
}


int main()
{

    //FastIO;

    //read(in);     write(out);

    sf1(n);

    fr1(i,n)
    {
        sf2(p,q);   mp[i]=q;   

        if(p==-1)   x=i;
        
        else        vr[i].push_back(p),   vr[p].push_back(i);        
    }

    DFS(x,x);

    if(nodes.size()==0) 
    {
        pf("-1\n");     return 0;
    }
    sort(nodes.begin(),nodes.end());

    fr0(i,nodes.size())     pf("%lld ",nodes[i]);   pf("\n");
}
