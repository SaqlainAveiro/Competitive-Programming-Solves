#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,w,sum=0,total=0;

#define INF 10000000000000

vector <lli> v[100009],cost[100009];

lli dis[100009],cp[100009]={0};

struct node
{
    lli x,cost;

    node(lli _x, lli _cost)
    {
        x = _x;
        cost = _cost;
    }

    bool operator<(const node& p)const
    {
        return cost>p.cost;
    }
};

void Dijkstra(lli source)
{
    for(k=0 ; k<=n ; k++)
    {
        dis[k]=cp[k]=INF;

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

            if((dis[u] + cost[u][i]) < dis[v1] )
            {
                dis[v1]=dis[u]+cost[u][i];

                Q.push(node(v1,dis[v1]));

                cp[v1]=u;
            }
        }
    }

    if(cp[n]==INF)
    {
        cout<<"-1\n";
    }
    else
    {
        stack<lli>res;
        res.push(n);

        while(cp[n]!=INF)
        {
            res.push(cp[n]);
            n=cp[n];
        }
        while(!res.empty())
        {
            cout<<res.top()<<" ";
            res.pop();
        }

        cout<<"\n";
    }
}


int main()
{

    scanf("%lld %lld",&n,&m);

    for(lli i=0 ; i<m ; i++)
    {
        scanf("%lld %lld %lld",&p,&q,&w);

        v[p].push_back(q);
        v[q].push_back(p);

        cost[p].push_back(w);
        cost[q].push_back(w);
    }

    Dijkstra(1);
}
