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

    //read(in);    write(out);

    sf1(t);     
    
    vector<lli>ar,br;
    map<lli,lli>mp;

    fr1(i,t)
    {
        sf1(x),     ar.push_back(x);
    }

    p=-INF;

    fr2(i,t)
    {
        p=max(p,ar[i-1]);  

        if(p>ar[i-1])   br.push_back(p+1-ar[i-1]);
        else    
        {
            br.push_back(mp[p]);    mp[p]=1;
        }
    }

    fr2(i,t)    pf("%lld ",br[i-1]);    pf("\n");
}