#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

void bfs(lli source, lli level[] , vector<lli>v[])
{
    queue <lli> Q;
    Q.push(source);
    level[source]=0;

    while(!Q.empty())
    {
        lli u=Q.front();
        Q.pop();

        for(lli i=0 ; i<v[u].size();i++)
        {
            lli v1=v[u][i];

            if(level[v1]==0)
            {
                level[v1]=level[u]+1;
                Q.push(v1);
            }
        }
    }
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli level[10000]={0};
        vector <lli> v[10000];

        cin>>n>>m;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
            v[q].push_back(p);
        }

        cin>>x;

        /*cout<<"\nAdjacency List = \n\n";
        for(i=1 ; i<=n ; i++)
        {
            cout<<i<<" -> ";
            for(lli j=0 ; j<v[i].size() ; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }*/

        bfs(x,level,v);

        for(j=1 ; j<=n ; j++)
        {
            if(j!=x)
            {
                if(level[j]!=0)
                {
                    cout<<level[j]*6<<" ";
                }
                else
                {
                    cout<<-1<<" ";
                }
            }

        }
        cout<<"\n";
    }
}
