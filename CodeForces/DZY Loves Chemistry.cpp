#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

void DFS(lli source , vector<lli> v[] , lli visited[])
{
    visited[source]=1;

    for(lli i=0 ; i<v[source].size() ; i++)
    {
        lli y=v[source][i];

        if(visited[y]==0)
        {
            //cout<<y<<" ";
            sum++;
            DFS(y,v,visited);
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    t=1;

    while(t--)
    {
        lli visited[10000]={0},cost[1000]={INT_MAX};

        vector <lli> v[10000];

        cin>>n>>m;

        for(lli i=1 ; i<=m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
            v[q].push_back(p);
        }

        /*cout<<"Adjacency List = \n";
        for(lli i=1 ; i<=n ; i++)
        {
            cout<<i<<" -> ";
            for(lli j=0 ; j<v[i].size() ; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }*/

        sum=1;
        //cout<<"DFS Visits : 1 ";
        for(j=1 ; j<=n ; j++)
        {
            DFS(j,v,visited);
        }
        //DFS(n,v,visited);
        cout<<"\n\n";
        cout<<sum<<"\n";
    }
}
