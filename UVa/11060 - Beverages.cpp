#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

vector<string>res;

void Topological_Sort_BFS(lli source , vector<lli>v[] , lli indegree[] ,  map<lli,string>xp)
{
    set <lli> Q;

    for(lli i=1 ; i<=n ; i++)
    {
        for(lli j=0 ; j<v[i].size() ; j++)
            indegree[ v[i][j] ]++;
    }

    for(lli i=1 ; i<=n ; i++)
    {
        if(indegree[i]==0)
            Q.insert(i);
    }
    //cout<<"\nTopological Sorting : \n";

    while(!Q.empty())
    {
        lli u=*Q.begin();

        Q.erase(Q.begin());

        //cout<<" "<<xp[u];

        res.push_back(xp[u]);

        for(lli i=0 ; i<v[u].size() ; i++)
        {
            lli v1=v[u][i];
            indegree[v1]--;

            if(indegree[v1]==0)
                Q.insert(v1);
        }
    }

    //cout<<".\n";
}


int main()
{
    //freopen("Input.txt","r",stdin);

    k=0;
    while(scanf("%lld",&n)!=EOF)
    {
        k++;
        lli indegree[1000]={0};
        vector <lli> v[1000];
        map<string , lli>mp;
        map<lli , string>xp;
        string br,cr;

        for(lli i=1 ; i<=n ; i++)
        {
            cin>>br;    mp[br]=i;   xp[i]=br;
        }

        cin>>m;

        while(m--)
        {
            cin>>br>>cr;
            v[ mp[br] ].push_back( mp[cr] );
        }
        /*cout<<"Adjacency List = \n\n";
        for(i=1 ; i<=n ; i++)
        {
            cout<<i<<". "<<xp[i]<<"-> ";
            for(lli j=0 ; j<v[i].size() ; j++)
            {
                cout<<v[i][j]<<". "<<xp[ v[i][j] ]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";*/

        cout<<"Case #"<<k<<": Dilbert should drink beverages in this order:";

        Topological_Sort_BFS(1,v,indegree,xp);

        for(lli i=0 ; i<res.size() ; i++)
        {
            cout<<" "<<res[i];
        }
        cout<<".\n\n";

        res.clear();
    }
}
