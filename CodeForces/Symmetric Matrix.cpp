#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
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

    fr1(i,t)
    {
        sf2(n,m);   vector< pair<lli,lli> >ar;  sum=1;

        fr1(j,2*n)  sf2(x,y),       ar.push_back(make_pair(x,y));

        if(m%2!=0)
        {
            pf("NO\n");     continue;
        }

        for(lli j=0 ; j<2*n-1 ; j+=2)
        {
            if(ar[j].second == ar[j+1].first)
            {
                sum=2;  break;
            }
        }

        if(sum==2)      pf("YES\n");

        else    pf("NO\n");

    }
}
