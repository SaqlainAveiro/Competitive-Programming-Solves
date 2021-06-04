#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

void BFS(lli source, lli destination, lli level[], vector<lli>v[])
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

            if(level[v1]==0 && v1!=source)
            {
                level[v1]=level[u]+1;

                if(v1==destination)     return;

                Q.push(v1);
            }
        }
    }
}


int main()
{
   //freopen("Input.txt","r",stdin);

    k=1;

    while(scanf("%lld",&m)!=EOF)
    {
        vector <lli> v[100];

        for(lli j=1 ; j<=m ; j++)
        {
            cin>>q;
            v[1].push_back(q);
            v[q].push_back(1);
        }

        d=2;

        for(d=2 ; d<20 ; d++)
        {
            cin>>m;
            for(lli j=1 ; j<=m ; j++)
            {
                cin>>q;
                v[d].push_back(q);
                v[q].push_back(d);
            }
        }

        /*cout<<"\nAdjacency List = \n\n";
        for(i=1 ; i<=20 ; i++)
        {
            cout<<i<<" -> ";
            for(lli j=0 ; j<v[i].size() ; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";*/

        cin>>t;

        cout<<"Test Set #"<<k<<"\n";

        while(t--)
        {
            cin>>x>>y;

            printf("%2lld to %2lld: ",x,y);

            if(x>y)     swap(x,y);

            lli level[100]={0};

            BFS(x,y,level,v);

            printf("%lld\n",level[y]);
        }
        cout<<"\n";
        k++;
    }
}
