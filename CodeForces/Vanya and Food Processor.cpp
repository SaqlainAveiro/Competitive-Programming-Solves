#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(i=0 ; i<n ; i++)
#define fr1(i,n) for(i=1 ; i<=n ; i++)
#define fr2(i,n) for(i=n ; i>=1 ; i--)
#define frx(i,x,n) for(i=x ; i<=n ; i++)
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

    sf("%lld %lld %lld",&n,&h,&k);

    fr1(i,n)    sf1(x),     ar.push_back(x);

    sum=p=q=0;

    fr0(i,n)
    {
        if(p+ar[i]<=h)    p+=ar[i];

        else
        {
            if(p<k && p>=1)     sum++ , i-- , ar[i]=p=0;

            else    q=p/k,     sum+=q,     i--,    ar[i]=p=p%k;
        }
    }

    if(p>0)
    {
        sum+=p/k;   if(p%k>0)   sum++;
    }
    pf("%lld\n",sum);
}
