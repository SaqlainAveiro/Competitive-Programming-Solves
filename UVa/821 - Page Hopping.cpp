#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

#define vsize 999

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

vector<lli>res,node;
vector<lli>::iterator it;

double ans,f1,f2;

void BFS(lli source, lli level[] , vector<lli>v[])
{
    queue <lli> Q;

    Q.push(source);

    level[source]=0;

    while(!Q.empty())
    {
        lli u=Q.front();
        Q.pop();

        //cout<<u<<" ";

        for(lli i=0 ; i<v[u].size();i++)
        {
            lli v1=v[u][i];

            if(level[v1]==0 && v1!=source)
            {
                level[v1]=level[u]+1;
                Q.push(v1);
                res.push_back(level[v1]);
                //cout<<level[v1]<<" ";
            }
        }
    }
}


int main()
{
    //freopen("Input.txt","r",stdin);

    y=1;

    while(1)
    {
        vector <lli> v[1000];

        map<lli,lli>mp;

        res.clear();
        node.clear();

        while(1)
        {
            cin>>p>>q;

            if(p!=0 && q!=0)
            {
                v[p].push_back(q);

                if(mp[p]!=1)
                {
                    mp[p]=1;
                    node.push_back(p);
                }
                if(mp[q]!=1)
                {
                    mp[q]=1;
                    node.push_back(q);
                }

            }
            else    break;
        }
        if(node.size()==0)    break;

        sort(node.begin(),node.end());

        sum=0;

        for(it=node.begin() ; it!=node.end() ; it++)
        {
            lli level[vsize]={0};

            BFS(*it,level,v);
        }

        for(i=0 ; i<res.size() ; i++)
        {
            sum += res[i];
        }

        f2=sum;

        f1=res.size();

        ans=f2/f1;

        //cout<<"All path distance sum : "<<sum<<" Total Paths : "<<res.size()<<"\n\n";

        printf("Case %lld: average length between pages = %.3f clicks\n",y,ans);

        ans=f1=f2=0.0;

        y++;
    }
}
