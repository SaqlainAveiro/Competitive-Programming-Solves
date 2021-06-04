#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum,total;

void DFS(lli source , vector<lli>v[] , lli visited[] , map<lli,lli>mp)
{
    visited[source]=1;

    for(lli i=0 ; i<v[source].size() ; i++)
    {
        lli y=v[source][i];

        if(visited[y]==0)
        {
            if(mp[y]!=1 && mp[y]!=2)
            {
                mp[y]=2;
                sum++;
            }
            DFS(y,v,visited,mp);
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {

        lli visited[50000]={0};

        vector <lli> v[90];

        map<lli,lli>mp;

        sum=1;

        cin>>n>>m>>l;

        for(lli i=1 ; i<=m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
        }

        while(l--)
        {
            cin>>c;
            mp[c]=1;
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

        if(mp[1]==1)
        {
            sum=0;
            mp[1]=2;
        }

        DFS(1,v,visited,mp);

        cout<<sum<<"\n";
    }

}

