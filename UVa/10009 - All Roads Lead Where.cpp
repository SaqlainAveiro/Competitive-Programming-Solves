//Saqlain-AUST CSE-41
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

vector<string>res,res2;
vector<string>::iterator it;

void BFS(lli source, lli destination, map<lli,string>xp , lli level[] , vector<lli>v[])
{
    queue <lli> Q;
    Q.push(source);
    level[source]=1;

    while(!Q.empty())
    {
        lli u=Q.front();
        Q.pop();

        for(lli i=0 ; i<v[u].size();i++)
        {
            lli v1=v[u][i];

            if(v1!=source && level[v1]==0)
            {
                cout<<xp[v1]<<" ";

                res.push_back(xp[v1]);

                level[v1]=level[u]+1;

                if(v1==destination)
                {
                    return;
                }
                Q.push(v1);
            }
        }
    }
}


int main()
{
    freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        vector <lli> v[1000];
        map<string , lli>mp;
        map<lli , string>xp;
        string br,cr;

        cin>>m>>n;

        a=1;

        for(lli i=0 ; i<m ; i++)
        {
            cin>>br>>cr;
            if(mp[br]==0)
            {
                mp[br]=a;
                xp[a]=br;
                a++;
            }
            if(mp[cr]==0)
            {
                mp[cr]=a;
                xp[a]=cr;
                a++;
            }
            v[ mp[br] ].push_back( mp[cr] );
            v[ mp[cr] ].push_back( mp[br] );
        }


        cout<<"\nAdjacency List = \n\n";
        for(i=1 ; i<a ; i++)
        {
            cout<<xp[i]<<" -> ";
            for(lli j=0 ; j<v[i].size() ; j++)
            {
                cout<<xp[ v[i][j] ]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";cout<<"\n";

        for(lli i=0 ; i<n ; i++)
        {
            lli level[1000]={0};

            cin>>br>>cr;

            cout<<br<<" ";

            res.push_back(br);

            BFS( mp[br] , mp[cr] , xp , level , v);

            res2.push_back(cr);

            k=c=0;

            while(1)
            {
                if(cr==br)  break;

                k=mp[cr];

                for(lli j=0 ; j<v[k].size() ; j++)
                {
                    //cout<<xp[ v[k][j] ]<<" ";

                    cr=xp[ v[k][j] ];

                    for(it=res.begin() ; it!=res.end() ; it++)
                    {
                        if(*it==cr)
                        {
                            res2.push_back(cr);
                            c=1;break;
                        }
                    }
                    if(c==1)
                    {
                        c=0;
                        break;
                    }

                }
            }

            cout<<"\n";cout<<"\n";

            for(it=res2.begin() ; it!=res2.end() ; it++)
            {
                cout<<*it<<" ";
            }
            cout<<"\n";

            res.clear();res2.clear();
        }
    }
}
