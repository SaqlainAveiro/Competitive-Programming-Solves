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

int main()
{
    //FastIO;

    //read(in);

    vector<lli>ar;
    set<lli>s1[200001];
    set<lli>::iterator it;
    map<lli,lli>mp;

    sf1(t);

    fr(i,t)   sf1(x),     ar.push_back(x);

    fr(i,t)   sf1(x),     mp[ ar[i-1] ]=x,      s1[x].insert(ar[i-1]);

    fr(i,t)
    {
        sf1(x);    if(mp[ ar[i-1] ]!=x)     s1[x].insert(ar[i-1]);
    }

    sf1(m);

    fr(i,m)
    {
        sf1(x);

        p=-1;

        if(s1[x].size()>0)   it=s1[x].begin(),   p=*it;

        if(p>0)
        {
            if(s1[1].find(p)!=s1[1].end())      s1[1].erase(s1[1].find(p));
            if(s1[2].find(p)!=s1[2].end())      s1[2].erase(s1[2].find(p));
            if(s1[3].find(p)!=s1[3].end())      s1[3].erase(s1[3].find(p));
        }

        pf("%lld ",p);
    }
    pf("\n");
}
