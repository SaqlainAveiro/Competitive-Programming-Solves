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

lli visited[len]={0},level[len]={0},sz[len]={0};
vector<lli>vr[len],ar;

void DFS(lli source , lli lev)
{
    visited[source]=1;
    level[source]=lev;
    sz[source]=1;

    fr1(k,vr[source].size())
    {
        lli y=vr[source][k-1];

        if(visited[y]==0)  
        {
            DFS(y,lev+1);
            sz[source]+=sz[y];        
        }
    }
}


int main()
{

    //FastIO;

    //read(in);   write(out);

    sf2(n,k);   m=n-1;

    fr1(i,m)
    {
        sf2(p,q);
        vr[p].push_back(q);
        vr[q].push_back(p);
    }

    DFS(1,0);

    fr1(i,n)
    {
        ar.push_back(level[i]-sz[i]+1);
        //pf("Level : %lld , Size : %lld\n",level[i],sz[i]);
    }

    sort(ar.begin()+1,ar.end());

    fr2(i,n)
    {
        if(k>0)
        {
            sum+=ar[i-1];   k--;
        }
    }

    pf("%lld\n",sum);
}
