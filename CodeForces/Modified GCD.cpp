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
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

vector<lli>ar;

int main()
{
    //FastIO;

    //read(in);

    sf2(a,b);   sf1(t);

    sum=__gcd(a,b);

    fr1(i,sqrt(sum))
    {
        if(sum%i==0)
        {
            if(sum/i==i)    ar.push_back(i);

            else    ar.push_back(sum/i),    ar.push_back(i);
        }
    }

    sort(ar.begin(),ar.end());

    p=ar.size();

    //fr0(j,p)    pf("%lld ",ar[j]);      pf("\n\n");

    fr1(i,t)
    {
        sf2(a,b);       //res=bin_search(1);

        if(a>ar[p-1] || b<ar[0])  pf("-1\n");

        else
        {
            x=0;
            for(j=p ; j>=0 ; j--)
            {
                if(ar[j]<=b && ar[j]>=a)
                {
                   x=1; pf("%lld\n",ar[j]);     break;
                }
            }
            if(x==0)    pf("-1\n");
        }
    }
}
