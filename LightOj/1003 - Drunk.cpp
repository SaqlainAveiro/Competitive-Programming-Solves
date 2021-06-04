#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

map<lli,string>mp;
map<string,lli>sp;

void Topological_Sort_BFS(lli source, lli level[] , vector<lli>v[] , lli indegree[])
{
    for(lli i=1 ; i<=k ; i++)
    {
        for(lli j=0 ; j<v[i].size() ; j++)
        {
            indegree[ v[i][j] ]++;
        }
    }

    queue <lli> Q;

    for(lli i=1 ; i<=k ; i++)
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

        //cout<<mp[u]<<" ";
        y++;
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
    //cout<<"\n";
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
        lli indegree[10000]={0};

        sp.clear(); mp.clear();

        string ar,br,cr;

        cin>>m;

        y=0;
        k=1;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>ar>>br;
            if(sp[ar]==0)
            {
                sp[ar]=k;
                mp[k]=ar;
                k++;
            }
            if(sp[br]==0)
            {
                sp[br]=k;
                mp[k]=br;
                k++;
            }
            v[ sp[ar] ].push_back( sp[br] );
        }
        k--;
        /*cout<<"\nAdjacency List = \n\n";
        for(lli i=1 ; i<=k ; i++)
        {
            cout<<*it<<" -> ";
            for(lli j=0 ; j<v[*it].size() ; j++)
            {
                cout<<v[*it][j]<<" ";
            }
            cout<<"\n";
        }*/

        Topological_Sort_BFS(1,level,v,indegree);

        /*cout<<"\n\nBFS Levels = \n\n";
        for(lli i=1 ; i<=k ; i++)
        {
            cout<<"Node = "<<*it<<" Level = "<<level[*it]<<"\n";
        }
        cout<<"\n";*/
        if(y!=k)    cout<<"Case "<<i<<": No\n";
        else    cout<<"Case "<<i<<": Yes\n";
        //cout<<"\n";
    }
}


