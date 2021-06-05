#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0,source;

vector <lli> v[90000] , ar;

void DFS(lli source , lli visited[])
{
    visited[source]=1;

    for(lli i=0 ; i<v[source].size() ; i++)
    {
        lli y=v[source][i];

        ar.push_back(y);

        if(visited[y]==0)
        {
            DFS(y,visited);
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>n;

    m=n;

    for(lli i=1 ; i<=m ; i++)
    {
        cin>>p;
        v[i].push_back(p);
    }

    for(lli i=1 ; i<=n ; i++)
    {
        lli visited[10000]={0};

        DFS(i,visited);

        cout<<ar[ar.size()-1]<<" ";

        ar.clear();
    }
    cout<<"\n";
}
