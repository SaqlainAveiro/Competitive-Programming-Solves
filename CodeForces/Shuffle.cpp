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

    sf1(t);

    fr(i,t)
    {
        vector< pair<lli,lli> >ar;

        sf("%lld %lld %lld",&n,&x,&m);

        fr(j,m)     sf2(a,b)    , ar.push_back(make_pair(a,b));

        a=b=x;

        fr(j,m)
        {
            if(a>ar[j-1].first && a<=ar[j-1].second)     a=min(a,ar[j-1].first);

            if(ar[j-1].first<=b && ar[j-1].second>=b)    b=max(b,ar[j-1].second);
        }

        pf("%lld\n",b-a+1);
    }
}
