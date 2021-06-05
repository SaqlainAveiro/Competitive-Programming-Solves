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
    set<lli>cse;
    set<lli>::iterator it;
    map<lli,lli>mp,sp;

    sf1(n);

    fr(i,n)
    {
        sf2(x,y);  if(x!=y)  sp[y]++;  mp[x]++;  cse.insert(x) , cse.insert(y);
    }

    sum=n/2;

    if(n%2!=0)  sum++;

    ans=total=0;    res=INF;

    for(it=cse.begin() ; it!=cse.end() ; it++)
    {
        ans=mp[*it] ,   total=sp[*it];

        if(ans+total>=sum)      res=min(res,max((lli)0,sum-ans));
    }

    if(res>sum)    res=-1;

    pf("%lld\n",res);
}
