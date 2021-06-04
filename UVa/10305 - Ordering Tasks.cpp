#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

void Topological_Sort_BFS(lli source, lli level[] , vector<lli>v[] , lli indegree[])
{
    for(lli i=1 ; i<=n ; i++)
    {
        for(lli j=0 ; j<v[i].size() ; j++)
        {
            indegree[ v[i][j] ]++;
        }
    }

    queue <lli> Q;

    for(lli i=1 ; i<=n ; i++)
    {
        if(indegree[i]==0)
        {
            Q.push(i);
        }
    }
    //cout<<"\nTopological Sorting : ";

    while(!Q.empty())
    {
        lli u=Q.front();

        Q.pop();

        cout<<u<<" ";

        for(lli i=0 ; i<v[u].size() ; i++)
        {
            lli v1=v[u][i];

            if(indegree[v1]>0)
                indegree[v1]--;

            if(indegree[v1]==0)
                Q.push(v1);

            /*if(level[v1]==0 && v1!=source)
            {
                level[v1]=level[u]+1;
                Q.push(v1);
            }*/
        }
    }

    cout<<"\n";
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    while(1)
    {
        lli level[10000]={0};
        vector <lli> v[10000];
        lli indegree[10000]={0};

        cin>>n>>m;

        if(n==0 && m==0)    break;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
        }

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

        Topological_Sort_BFS(1,level,v,indegree);

        /*cout<<"\n\nBFS Levels = \n\n";
        for(j=1 ; j<=n ; j++)
        {
            cout<<"Node = "<<j<<" Level = "<<level[j]<<"\n";
        }
        cout<<"\n";*/
    }
}

