#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define fr1(i,x,n) for(i=x ; i<=n ; i++)
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

    while(!Q.empty() && ans>=0)
    {
        lli u=Q.front();
        Q.pop();

        if(v[u].size()==0)      continue;

        fr(x,v[u].size())
        {
            lli v1=v[u][x-1];

            if(v[v1].size()==0)     sum++;

            if(level[v1]==0 && v1!=source)  level[v1]=level[u]+1,  Q.push(v1);
        }

        if(sum<3)   ans=-1;

        else sum=0;
    }
}


int main()
{
    //FastIO;

    //read(in);

    lli level[1001]={0};
    vector <lli> v[1001];

    sf1(n);

    y=n-1;

    fr(j,y)   sf1(p),  v[p].push_back(j+1);

    BFS(1,level,v);

    if(ans>=0)  pf("Yes\n");

    else  pf("No\n");
}
