//Saqlain-AUST CSE-41
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

lli level[100000]={0};

void BFS(lli source, vector<lli>v[])
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
                Q.push(v1);
            }
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    d=1;

    while(1)
    {
        cin>>m;

        if(m==0)    break;

        vector <lli> v[90000];
        set<lli>nodes;
        set<lli>::iterator it;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>p>>q;
            v[p].push_back(q);
            v[q].push_back(p);

            nodes.insert(p);
            nodes.insert(q);
        }

        /*cout<<"\nAdjacency List = \n";
        for(it=nodes.begin() ; it!=nodes.end() ; it++)
        {
            cout<<*it<<" -> ";
            for(lli j=0 ; j<v[*it].size() ; j++)
            {
                cout<<v[ *it ][j]<<" ";
            }
            cout<<"\n";
        }*/

        while(1)
        {
            cin>>x>>y;

            if(x==0 && y==0)    break;

            memset(level,0,sizeof(level));

            BFS(x,v);

            sum=0;

            //cout<<"\n\nBFS Levels = \n";
            for(it=nodes.begin() ; it!=nodes.end() ; it++)
            {
                //cout<<"Node = "<<*it<<" Level = "<<level[*it]<<"\n";
                if(level[*it]>y || level[*it]==0)
                {
                    sum++;
                }
            }
            //cout<<"\n";
            cout<<"Case "<<d<<": "<<sum-1<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<".\n";
            d++;
        }
    }
}
