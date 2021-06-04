#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

#define black -6
#define white -5

void BFS(lli source, lli level[] , vector<lli>v[], map<lli,lli>mp)
{
    queue <lli> Q;

    Q.push(source);

    level[source]=0;

    mp[source]=white;

    while(!Q.empty())
    {
        lli u=Q.front();

        Q.pop();

        //cout<<u<<" ";

        //cout<<mp[u]<<" ";

        for(lli i=0 ; i<v[u].size();i++)
        {
            lli v1=v[u][i];

            if(level[v1]==0)
            {
                level[v1]=level[u]+1;
                Q.push(v1);
            }
            if(mp[v1]!=black && mp[v1]!=white )
            {
                if(mp[u]==white)
                    mp[v1]=black;
                else
                    mp[v1]=white;
            }
            else if(mp[v1]==mp[u])
            {
                total=60;
                break;
            }
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>n;

        if(n==0)    break;

        cin>>m;

        lli level[10000]={0};

        vector <lli> v[10000];

        map<lli,lli>mp;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
            v[q].push_back(p);
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
        }
        cout<<"BFS = ";*/

        total=50;

        BFS(0,level,v,mp);

        if(total==60)
        {
            cout<<"NOT BICOLORABLE.\n";
        }
        else
        {
            cout<<"BICOLORABLE.\n";
        }

        /*cout<<"\n\nBFS Levels = \n\n";

        for(j=1 ; j<=n ; j++)
        {
            cout<<"Node = "<<j<<" Level = "<<level[j]<<"\n";
        }
        cout<<"\n";*/
    }
}
