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

    sf1(t);

    vector<lli>ar,br;

    fr1(i,t)    sf1(x),     ar.push_back(x);        x=y=m=n=0;  p=1;

    //pf("Ranges : ");

    fr0(i,t-1)
    {
        if(ar[i]!=ar[i+1])
        {
            if(i==0)    n=max(ar[i],ar[i+1]),  m=min(ar[i],ar[i+1]),          y=1,          x=1,    p++;

            else
            {
                if(ar[i+1]==m)      x=1,    y=0 ,   p++;

                else if(ar[i+1]==n)     x=0,    y=1 ,   p++;

                else
                {
                    if(m==n)
                    {
                        p++;    m=min(ar[i],ar[i+1]);   n=max(ar[i],ar[i+1]);

                        if(ar[i+1]>ar[i])      x=0,    y=1;

                        else    y=0,    x=1;
                    }

                    else
                    {
                        br.push_back(p);    //pf("%lld ~ ",p);

                        if(ar[i+1]>n)      p=1+y,      x=0,    y=1,     n=ar[i+1],      m=ar[i];

                        else if(ar[i+1]<m)    p=1+x,    y=0,    x=1,    n=ar[i],      m=ar[i+1];
                    }
                }
            }

        }
        else
        {
            if(i==0)        n=m=ar[i+1],     y=2,      x=2,    p++;

            else
            {
                if(ar[i+1]==m && m<n)      x++;

                else if(ar[i+1]==n && n>m)   y++;

                else if(m==n)   y++,x++;

                p++;
            }

        }
    }
    br.push_back(p);    //pf("%lld",p);

    sort(br.begin(),br.end());      x=br.size()-1;      pf("%lld\n",br[x]);
}
