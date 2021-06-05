#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

void BFS(lli source, lli level[], vector<lli>v[])
{
    queue <lli> Q;
    Q.push(source);
    level[source]=0;

    while(!Q.empty())
    {
        lli u=Q.front();
        Q.pop();

        p=max(level[u]+1,p);

        fr1(x,v[u].size())
        {
            lli v1=v[u][x-1];

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
    //FastIO;

    //read(in);

    lli level[2009]={0};
    vector <lli> v[2009],s;

    sf1(m);

    fr1(j,m)
    {
        sf1(p);

        if(p!=-1)     v[p].push_back(j);

        else    s.push_back(j);
    }

    p=0;    fr0(j,s.size())      BFS(s[j],level,v);    pf("%lld\n",p);
}
