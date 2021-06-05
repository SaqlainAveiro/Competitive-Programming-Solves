#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    sf1(t);

    fr(i,t)
    {
        sf2(x,y);

        if(y>=x)    pf("1\n");

        else
        {
            p=q=0;  b=sqrt(x)+1;  ans=INF;

            fr(k,b)
            {
                if(x%k==0)
                {
                    p=k;
                    q=x/p;

                    if(y>=p)    ans=min(ans,q);

                    if(y>=q)    ans=min(ans,p);
                }
            }
            pf("%lld\n",ans);
        }
    }
}
