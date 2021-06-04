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

lli bin_search(lli m)
{
    lli low=0,high=INT_MAX,ans=-1;

    while(low<=high)
    {
        lli mid=(high+low)/2;

        if((mid*(mid+1)/2) <= m)    ans=mid,   low=mid+1;

        else    high=mid-1;
    }
    return ans;
}

int main()
{
    sf1(t);

    fr(i,t)   sf1(n),  pf("%lld\n",bin_search(n));
}
