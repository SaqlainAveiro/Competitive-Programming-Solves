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

    vector< pair<lli,lli> >ar;

    fr(i,t)     sf2(x,y),  ar.push_back(make_pair(x,y));

    sort(ar.begin(),ar.end());

    //fr(i,t)     pf("%lld %lld\n",ar[i-1].first,ar[i-1].second);

    sum=ans=0;  p=t-1;

    a=ar[0].second;b=0;

    fr(i,p)
    {
        if(a>ar[i].second)  a=ar[i].first,b=1;

        else  a=ar[i].second;
    }

    if(b==0)      pf("%lld\n",ar[p].second);

    else      pf("%lld\n",a);
}
