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

    sf1(t);

    fr1(i,t)
    {
        vector<lli>ar,br;
        map<lli,lli>mp;

        sf2(n,w);

        m=w/2;      if(w%2!=0)  m++;       p=-1;    sum=0;

        fr0(j,n)
        {
            sf1(x),     ar.push_back(x);

            if(x<m)    br.push_back(x);

            else if(x>=m && x<=w && p==-1)      p=j+1;
        }

        if(p>0)
        {
            pf("1\n%lld\n",p);  continue;
        }

        sort(br.begin(),br.end());     a=b=0;

        fr0(j,br.size())
        {
            sum+=br[j];     a++;    mp[ br[j] ]++;

            if(sum>=m && sum<=w)
            {
                b=-1; break;
            }
        }

        if(b==0)      pf("-1");

        else
        {
            pf("%lld\n",a);

            fr0(j,n)
            {
                if(mp[ ar[j] ]>0)   pf("%lld ",j+1) , mp[ ar[j] ]--;
            }
        }
        pf("\n");
    }
}
