#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
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

    sf2(n,m);

    vector<lli>ar,br;
    map<lli,lli>mp;

    fr1(i,n)    sf1(x),     ar.push_back(x);
    fr1(i,m)    sf1(x),    br.push_back(x),     mp[x]++;

    fr0(i,n)
    {
        if(mp[ ar[i] ]==0)
        {
            x=ar[i];    y=0;

            fr0(j,m)
            {
                if(br[j]>x && mp[ br[j] ]>0)
                {
                    y=1;  mp[ br[j] ]--;  break;
                }
            }
            if(y==0)    sum++;
        }
    }

    pf("%lld\n",sum);
}
