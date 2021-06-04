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

struct node
{
    lli x,cost;

    node(lli _x, lli _cost)
    {
        x = _x;
        cost = _cost;
    }

    bool operator<(const node& p)const  //operator overloading
    {
        return cost>p.cost;
    }
};

void Dijkstra(lli source , vector<lli>v[] , vector<lli>cost[] , lli dis[])
{
    for(k=0 ; k<=n ; k++)
    {
        dis[k]=INF;
    }

    priority_queue <node> Q;

    Q.push(node(source,0));

    dis[source]=0;

    while(!Q.empty())
    {
        node top = Q.top();

        Q.pop();

        lli u=top.x;

        for(lli i=0 ; i<(lli)v[u].size() ; i++)
        {
            lli v1=v[u][i];

            if(max(dis[u],cost[u][i]) < dis[v1])
            {
                dis[v1]=max(dis[u],cost[u][i]);

                Q.push(node(v1,dis[v1]));
            }
        }
    }
}


int main()
{
    //read(in);     write(out);

    cin>>t;

    for(lli i=1 ; i<=t ; i++)
    {
        vector <lli> v[16001],cost[16001]; 

        lli dis[16001];

        cin>>n>>m;

        for(lli f=0 ; f<m ; f++)
        {
            cin>>p>>q>>w;

            v[p].push_back(q);
            v[q].push_back(p);

            cost[p].push_back(w);
            cost[q].push_back(w);
        }

        cin>>y;     
        
        cout<<"Case "<<i<<":\n";

        Dijkstra(y,v,cost,dis);

        for(lli j=0 ; j<n ; j++)
        {
            if(dis[j]==INF) cout<<"Impossible\n";
            else    cout<<dis[j]<<"\n";        
        }
    }
}