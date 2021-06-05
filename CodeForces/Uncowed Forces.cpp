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

int main()
{
    //FastIO;

    //read(in);

    vector<lli>ar,br,cr;

    p=500;

    fr1(i,5)   ar.push_back(p),   p+=500;

    fr1(i,5)   sf1(x),   br.push_back(x);

    fr1(i,5)   sf1(x),   cr.push_back(x);

    sf2(a,b);

    fr0(i,5)
    {
        x=(ar[i]*3)/10;       y=(250-br[i])*(ar[i]/250)-50*cr[i];

        sum+=max(x,y);
    }

    pf("%lld\n",sum+a*100-b*50);
}
