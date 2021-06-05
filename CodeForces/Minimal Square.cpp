#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define scf(val) scanf("%lld",&val)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    scf(t);

    fr(i,t)
    {
        sf("%lld %lld",&x,&y);

        a=2*max(x,y);     b=2*min(x,y);

        sum=max(a/2,b);

        pf("%lld\n",sum*sum);
    }
}
