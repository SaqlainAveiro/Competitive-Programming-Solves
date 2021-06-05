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

    fr1(i,t)
    {
        vector< pair<lli,lli> >ar,cr;
        vector<lli>br;

        sf1(n);

        fr1(j,n)
        {
            sf1(x);

            ar.push_back(make_pair(x,j));  
        }

        sort(ar.begin(),ar.end());

        x=ar[0].first , y=ar[0].second; z=1;

        fr0(j,n)
        {
            if(x!=ar[j].first)      cr.push_back(make_pair(y,ar[j].second)),z=0;;
        }

        if(z==1) 
        {
            pf("NO\n");     continue;
        }

        fr1(j,n-1)
        {
            if(ar[j].first==x)      br.push_back(ar[j].second);
        }

        pf("YES\n");

        fr0(j,cr.size())    pf("%lld %lld\n",cr[j].first,cr[j].second);

        fr0(j,br.size())
        {
            y=br[j];   

            fr0(k,n) 
            {            
                if(ar[k].first!=x)
                {
                    pf("%lld %lld\n",y,ar[k].second);   break;
                }
            }
        }
    }
}